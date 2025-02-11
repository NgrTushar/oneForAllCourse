/*Rust groups errors into two major categories: recoverable and unrecoverable errors. For a recoverable error, such as a file not found error, we most likely just want to report the problem to the user and retry the operation. Unrecoverable errors are always symptoms of bugs, like trying to access a location beyond the end of an array, and so we want to immediately stop the program.*/

fn main(){
let v=vec![1,3,6];
v[55];
// this code will compile but will give out of bound runtime error 
//the way to fix the panic is to not request an element beyond the 
//range of the vector indexes.

}
