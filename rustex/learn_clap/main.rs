use clap::{Parser,Subcommand};
#[derive(Parser,Debug)]
struct Cli{
     name:String,
    /*#[arg(long)]
    two:String,
    #[arg(long)]
    one:String*/
}
fn main(){
let cli=Cli::parse();
dbg!(cli);

}