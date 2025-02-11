// follow up e7.rs where we bring our function code lines to 1
use std::io;
use std::io::Read;
use std::fs::File;
fn read_username_from_file()->Result<String,io::Error>{
let mut s=String::new();
let f=File::open("hello.txt")?.read_to_string(&mut s)?;
Ok(s)
}
fn main(){
let r=read_username_from_file();
println!("{:?}",r);
}
