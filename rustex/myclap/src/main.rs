use clap::{command, Arg, Command};

fn main() {
let match_result=command!()
.about("Register your patient name for doctor oppointment")
.subcommand(Command::new("register-person")
.arg(
    Arg::new("firstname")
        .short('f')
        .long("first-name")
        .aliases(["fname","firstname"])
        .required(true)
        .conflicts_with("lastname")
    // by using short method we can turn positional argument into 
    // named argument with a short name by using short method
)
.arg(
    Arg::new("lastname")
        .short('l')
        .long("last-name")
        .aliases(["lname","lastname"])
        .required(true)
))
.subcommand(Command::new("register-pet")
.arg(Arg::new("pet-name")
    .long("pet-name")
    .short('n')
    .required(true))
).get_matches();
}
