use State::*;
#[derive(Debug,Clone)]
enum State{
Empty,
Snake(Cell),
}
#[derive(Debug,Clone,Copy)]
struct Cell{
    row:usize,
    col:usize,
}

fn main() {
let col=30;
let row=15;
let mut v:Vec<Vec<State>>= vec![vec![Empty;col];row];
println!("{:?}",v[1][2]);
let y=v.get(2);
let mut c=Cell{
    row:0,
    col:0,
};
v[c.col][c.row]=Snake(c);
println!("{:?}",v.get(4));
println!("{:?}",v.len());
}
