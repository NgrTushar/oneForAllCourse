fn main(){

// rust provides vec macro to assign the values and initialise at a
// same time you can do that by vec! macro
{
let v=vec![1,4,9]; // it will get dropped when it goes out of scope
println!("{v:?}");
}
//println!("{v:?}"); // wont compile because v is not found anymore
}
