// follow up e5.rs, code can be simplified
use std::fs::File;
use std::io;
use std::io::Read;
fn read_username_from_file()->Result<String,io::Error>
{
let f=File::open("hello.txt");
let mut f=match f{
Ok(file)=>file,
Err(error)=>return Err(error)
};

let mut s=String::new();
match f.read_to_string(&mut s){
Ok(_)=>Ok(s),
Err(e)=>Err(e),
}
}

fn main(){
match read_username_from_file(){
Ok(content) => println!("{}", content),
Err(e) => eprintln!("Error reading file: {:?}", e),
} // this way you can extract contents of the file
// if you want to print only contents of the file 
// if you directly bind to a variable whatever 
// read_username_from_file() function returns then it will print
// Ok("") variant let x=f(); println!("{:?}",x);
}

