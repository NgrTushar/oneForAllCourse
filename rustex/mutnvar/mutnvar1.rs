fn main()
{
//let x; //1. this wont compile because type annotations is needed while declaring variable
let x ="SIX"; //2.
println!("value of x is {x}");
//x=6;// this wont compiler either(when 1. is not commented and 2. is commented) because we changed types and using "mut" keyword wont solve it
//this is where you can use a concept people call shadowing
let x=9; // this will compile because we shadowed x variable
// by using shadowing concept we can still preserve mutability and change type of the variable
println!("value of x is {x}");
}
