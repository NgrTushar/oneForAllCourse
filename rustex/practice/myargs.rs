// parsing command line arguments by standard crate through env module(part
// of the standard crate)
// data structure Args to get an instance of this struct you call 
// args function directly exported by env module in standard crate 
// after call args we get Args struct which implements iterator trait 
// first thing you get is a path to your binary, need to skip first one 
// to get arguments after that 
// cma are interpreted as string you can use parse function provided by 
// String data type 
// use std::env::args;
pub fn process_args(){
let mut myargs:Vec<String>=std::env::args().collect();
println!("{:?}",myargs);
//myargs.count()!=3 this statement consumes the iterator so we can either 
// reuse the args() function or turn myargs as a reference while calling
// count() we can specify that borrow the iterator instead of consuming
// so call .by_ref() on myargs this allows to borrow th myargs
// instead of consuming it
if myargs.len()!=3{
println!("Only two arguments allowed");
return;// return early
}
//construct Dog struct with input arguments
let name:String=myargs.get(1).unwrap().into(); 
// returns an Option of String pointer
let parsed_year=myargs.get(2).unwrap().parse::<i32>();
// here we handled error more gracefully if someone passed string instead
// of integer
if !parsed_year.is_ok(){
    println!("Invalid Birth year, provide valid birth year");
    return;
}
let birth_year=parsed_year.ok().unwrap();
let dog=new_dog(
    name, birth_year);
dog.get_details();
}
// checking the data type of the arguments
struct Dog{
    name:String,
    birth_year:i32,
    
    }

impl Dog{
fn get_details(&self){
println!("Dog name is {} was born in {}",self.name,self.birth_year);
}

}
    fn new_dog(name:String,birth_year:i32)->Dog{
    return Dog{name,birth_year}
    }