q
fn main(){
let x=4;
let equal_to_x=|z| z==x;
let y=4;
fn equal_to_x(z:u32)->bool{
    z==x
}// this wont compile
// if we used function instead of closure it will give  error that x cant be 
// captured from the environment because it has to use extra memory to 
// store that context but because function dont capture their environment 
// they dont incure the same Overhead
// But if we used closure they can capture environment 
assert!(equal_to_x(y));
}
