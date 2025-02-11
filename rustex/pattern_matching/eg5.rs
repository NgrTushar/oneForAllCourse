// irrefutable and refutable pattern
fn main(){
let x=5;
// let Pattern= Expression 
// here x=5 also a pattern and expression you can also say that we are matching 
// expression 5 to pattern x which matches any expression
let (x,y,z)=(1,2,4);
// irrefutable pattern are patterns which will always match 
// like x=5  
// Refutable pattern might not match
// example--
if x:Option<&str>=None;
if let Some(x)=x{ // Some(x) is a pattern that matches Some variant 
                  // if x is a None variant then this pattern will not match 
println!("{x}");
}
}
