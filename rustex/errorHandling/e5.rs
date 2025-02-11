// follow up e6.rs to learn how to use chaining of function 
use std::fs::File;
use std::io;
use std::io::Read;
fn read_username_from_file()->Result<String,io::Error>{
let mut f=File::open("hello.txt")?;
// using ?  will do similiar to calling unwrap() or expect() methods
// if opening file is success then file is returned and stored in f
// if we fail to get the file, function will end early and return
// the error 
let mut s=String::new();
f.read_to_string(&mut s)?; // if this call fails it returns error
// if gets to this line then we new read_to_string() succeeded
Ok(s)
}

fn main(){
match read_username_from_file(){
Ok(content)=>println!("{}",content),
Err(e)=>eprintln!("error occured: {:?}",e)
}
// this way we can print error by extracting from Err() variant
// otherwise when using just eprintln!("{:?}",error) would print
// error with Err()
}
