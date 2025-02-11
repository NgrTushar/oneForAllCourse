use std::fs::File;

fn main(){
let f=File::open("hello.txt"); // passing path to the file  
// open returns result type because, it might fail to open file
// to handle error and success case we will use match expression
let f=match f{
Ok(file)=>file,
Err(error)=>panic!("Problem Opening the file: {:?}",error),
};
// matching on the f which is a result type 
// if the variant is Ok() then bind the file to that file varible 
// and return it, if Variant is Err then bind error to error variable
// then panic and pass the error message to that panic!
} // this program results in panic and prints the error message because
// because hello.txt does not exist
// follow up e2.rs
