fn main(){
//let a:i32=[1,4,6]; // this wont compile you should also specify number
// of elements in the array if you are using type annotations 
// use array correctly- a[i32,3] ([type annotation;number of elements])
// an array a contains signed 32-bit integers
let b:[i32;3]=[3,6,4]; // this compiles 
println!("{b:?}");
let mut v:Vec<i32>=Vec::new(); // calling new function on Vec type 
// it will create empty vector; making it mutable to push elements
println!("{v:?}");
v.push(1);
v.push(5);
v.push(7);
println!("{v:?}");
}
