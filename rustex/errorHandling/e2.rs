// in this example we will try to end our program gracefully
// in order to that we need to create the file if not exist
use std::fs::File;
use std::io::ErrorKind;

fn main(){
let f=File::open("hello.txt");
let f=match f{
Ok(file)=>file,
Err(error)=> match error.kind(){
  ErrorKind::NotFound=> match File::create("hello.txt"){
    Ok(fc)=>fc,
    Err(e)=>panic!("Problem creating file: {:?}",e),
  },
other_error =>{
  panic!("Problem opening the file{:?}",other_error)
  
  }
}
};
// now instead of panicing we would match the type of error we get
// with the help of ErrorKind and kind method on error
// when file is not found we want to create new file but creating 
// new file may also fail to File::create() itself return Result
// Option which will be matched if created then map the file to fc
//  variable and return that,in error case panic will message
// to handle any other type of error we need to use other_error
// if there is any other error  other than NotFound then bind 
// the error to other_error variable and then panic with the message 
}
