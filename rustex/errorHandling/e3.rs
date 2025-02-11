use std::fs::File;


fn main(){
//let f=File::open("hello.txt").unwrap();
let f=File::open("hello.txt").expect("Failed to open the file");
/*let f=match f{
Ok(file)=>file,
Err(error)=>panic!("Problem opening the file {:?}",error)
};*/
 // instead of writing match expression you can use unwrap() function
 // unwrap() wwill do the same thing as match expression
 // in success it will return after binding whatever in file varible
 // in error case it will panic
 // by using expect you can specify error message you want 


}
