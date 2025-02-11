fn main(){
let x=Some(5);
let y=10;
match x{
Some(50)=>println!("Got 50"),
Some(y)=>println!("matched y with value {}",y),// store the value in y then
// print the value stored 
_=>println!("Default case {:?}",x),
// x will be the variable which is defined in outer scope 
}
println!("value of y in outer scope{}",y); // y in this scope is different then
                                           // y in match statement scope which is
                                           // inner scope 


}
