use std::mem::discriminant;
use std::process::exit;
use std::sync::{Arc, Mutex};
use std::thread;
use std::time::Duration;

use console::Key::*;
use console::Term;
use rand::prelude::*;

use Direction::*;
use Polarity::*;
use Tile::*;

const ROWS:usize = 15;
const COLS:usize = 30;

#[derive(Clone, Copy)]
struct Cell {
    row: usize, 
    col: usize,
}

#[derive(Clone)]
enum Tile {
    Empty,
    Snake(Cell),
    Food,
}

#[derive(Clone)]
enum Polarity {
    Pos,
    Neg,
}

#[derive(Clone)]
enum Direction { 
    Hor(Polarity),
    Ver(Polarity),
}

struct Control {
    dir_current: Direction,
    dir_next: Direction,
}

fn main() {
    let control = Arc::new(Mutex::new(Control {
        dir_current: Hor(Pos),
        dir_next: Hor(Pos)
    }));

    let control_thread = Arc::clone(&control);

    // Spawn a thread where the game state will be updated and rendered
    thread::spawn(move || {
        // We want a buffered stdout to print the resulting game state at once
        let term = Term::buffered_stdout();

        let mut field:Vec<Vec<Tile>> = vec![vec![Empty; COLS]; ROWS];

        // Get a random empty cell on the field.
        // Only used to place food
        //
        // The method I've chosen is not the most efficient. The better way would probably be to
        // keep track of empty/non-empy cells during the game update. But I'm lazy so this will do.
        let get_rnd_empty_cell = |field:&Vec<Vec<Tile>>| -> Option<Cell> {
            let mut empty_cells:Vec<(usize, usize)> = Vec::new();

            for row in 0..ROWS {
                for col in 0..COLS {
                    if matches!(field[row][col], Empty) {
                        empty_cells.push((row, col));
                    }
                }
            }

            if empty_cells.is_empty() {
                return None;
            }

            let mut rng = rand::thread_rng();

            empty_cells.shuffle(&mut rng);

            Some(Cell {
                row: empty_cells[0].0,
                col: empty_cells[0].1,
            })
        };

        let mut head = Cell {
            row: 7,
            col: 14
        };

        field[head.row][head.col] = Snake(head);

        let mut tail = Cell {
            row: 7,
            col: 13
        };

        field[tail.row][tail.col] = Snake(head.clone());

        // Place the first food on the field
        let rnd_cell = get_rnd_empty_cell(&field).unwrap();
        field[rnd_cell.row][rnd_cell.col] = Food;

        loop {
            let dir_current = {
                let mut control = control_thread.lock().unwrap();
                control.dir_current = control.dir_next.clone();

                control.dir_current.clone()
            };

            /**
             * This function is used to increase or decrease the horizontal or vertical position of
             * the snake's head on the field.
             * 
             * p - current position
             * pol - polarity (negative or positive)
             * lim - maximum value. We will use COLS or ROWS here
             */
            fn step(p:usize, pol:Polarity, lim:usize) -> usize {
                match pol {
                    Pos => if p == lim - 1 {
                        0
                    } else {
                        p + 1
                    },
                    Neg => if p == 0 {
                        lim - 1
                    } else {
                        p - 1
                    },
                }
            }

            let head_prev = head.clone();

            // Move the head position according to the direction
            match dir_current {
                Hor(pol) => {
                    head.col = step(head.col, pol, COLS);
                },
                Ver(pol) => {
                    head.row = step(head.row, pol, ROWS);
                }
            }

            // Let's check the type of the tile the head will end up in
            match field[head.row][head.col] {
                Food => {
                    // If it is food - try to find a random empty cell and put another piece of
                    // food there
                    match get_rnd_empty_cell(&field) {
                        Some(cell) => {
                            // Create a new food tile in an empty place
                            field[cell.row][cell.col] = Food;
                        },
                        None => {
                            // No empty cells to put food into
                            // I guess we're not going to do anything here...
                        }
                    }
                },
                Snake(_) => {
                    // The snake hit itself... It is a game over
                    term.move_cursor_to(10, ROWS/2).unwrap();
                    term.write_str("GAME OVER!").unwrap();
                    term.flush().unwrap();
                    break;
                },
                Empty => {
                    // Empty cell, so just pull the tail forward
                    if let Snake(next) = field[tail.row][tail.col] {
                        field[tail.row][tail.col] = Empty;
                        tail = next.clone();
                    }
                },
            };

            // Replace the tile at the previous head position to a new Snake tile referencing the
            // new head position
            field[head_prev.row][head_prev.col] = Snake(head.clone());

            // Put a new Snake tile in the new head position. The head value doesn't have any use
            // here. Ideally we should allow this valu to be empty with Option for example.
            field[head.row][head.col] = Snake(head);

            // Clear the screen
            term.clear_screen().unwrap();

            // Render the field
            for row in 0..ROWS {
                for col in 0..COLS {
                    let ch = match field[row][col] {
                        Empty => ".",
                        Snake(_) => "@",
                        Food => "$"
                    };

                    term.write_str(ch).unwrap();
                }

                term.move_cursor_down(1).unwrap();
                term.clear_line().unwrap();
            }

            // Flush the buffered output to the terminal
            term.flush().unwrap();

            // Sleep for some time. The amount of milliseconds to sleep can control the pace of the
            // game
            thread::sleep(Duration::from_millis(100));
        }
    });

    // Terminal to use for the user's inpu
    let term = Term::stdout();
    term.set_title("Snek!");

    loop {
        // Read a key from the terminal. The thread will be blocked until the user hits anything
        let key = term.read_key().unwrap();

        match key {
            ArrowLeft | ArrowRight | ArrowUp | ArrowDown => {
                let mut ctrl = control.lock().unwrap();

                let dir_next = match key {
                    ArrowLeft => Hor(Neg),
                    ArrowRight => Hor(Pos),
                    ArrowUp => Ver(Neg),
                    ArrowDown => Ver(Pos),
                    _ => unreachable!("It can't be any other key!"),
                };

                // Only change the direction if the current direction and the new selected
                // direction are not of the same discriminant.
                // E.g. only Ver vs Hor or vice versa.
                // If the snake moves horizontally, we only can change its direction to vertical
                // and the other way around.
                if discriminant(&ctrl.dir_current) != discriminant(&dir_next) {
                    ctrl.dir_next = dir_next;
                }
            },
            Escape => {
                exit(0);
            },
            _ => {},
        }
    }
}
