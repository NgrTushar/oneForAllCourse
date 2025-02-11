fn main(){
let x=60;
println!("x value is {x}");
//x=70; this wont compiler because you cannot assign value twice to any variable until you you declare them mutable
let mut y=50;
println!("y value is {y}");
y=40;
println!("y value is {y}");
// if you want your values to never get changed const keyword does that job for you
const CONSTANT:u32 = 8000; //calculated at runtime
// type declacaration is needed for using const variable otherwise it wont compile
}
