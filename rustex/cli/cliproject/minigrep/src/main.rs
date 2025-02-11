// take an commmand line argument we want use to pass a string and
// filename to achieve that we need to import env module from standard
// library args() function gives iterator over the arguments passed
// through our program and collect() will turn that iterator into a
// collection thats why we need to specify type, collects needs to 
// know the type of the collection
use std::env;
use std::process;
use minigrep::Config; 
fn main(){
let args:Vec<String>=env::args().collect();

let config=Config::new(&args).unwrap_or_else(|err| {
    eprintln!("Problem parsing arguments: {}",err);
    process::exit(1);
});
println!("query: {}",config.query);
println!("filename: {}",config.filename);
println!("{:?}",args);
if let Err(e)=minigrep::run(config){
    eprintln!("Application error: {}",e);
    process::exit(1);
}
}



 
