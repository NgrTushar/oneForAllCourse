use std::fs::File;
fn main()-> Result<(),Box<dyn Error>>{
let f=File::open(hello.txt)?;
// ? can only be used in a function where function returns Result or
// Option
// in success case we return unit type 
// in error case we return trait object

Ok(())
}
