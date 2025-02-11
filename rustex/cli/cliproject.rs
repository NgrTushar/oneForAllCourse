// take an commmand line argument we want use to pass a string and
// filename to achievethat need to import env module from standard
// library args() function gives iterator over the arguments passed
// through our progra and collect() will turn that iterator into a
// collection thats why we need to specify type, collects needs to 
// know the type of the collection
use std::env;
fn main(){
let arg:Vec<String>=env::args().collect();
println!("{:?}",arg);
}
