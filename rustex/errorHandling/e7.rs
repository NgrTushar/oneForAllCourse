use std::fs::{self,File};
use std::io;
use std::io::Read;
fn read_username_from_file()->Result<String,io::Error>{
fs::read_to_string("hello.txt")
// fs module have the convinient function that takes path to a 
// file and returns result which can be string containing contents of
// the file or an error 
}
fn main(){
let r=read_username_from_file();
println!("{:?}",r);
}

