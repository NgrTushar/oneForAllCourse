//ownership is just a way to manage memory
// memory is stored in either on heap or stack 
// during runtime memory is allocated and have access to stack and heap 
// in this example stack frames are stored on stack which are created for every function
// that executes,stack frames also stores local variable of a function which is getting 
// executed also size of stack frame is calculated on compile time , variable live 
// until its stack frame lives 
// heap grows or shrink at runtime data stored on heap is dynamic in size 
fn main()
{
fn a()
{
let x="yes"; 
// x is a string literal datatype &str which is stored in our binary
// x is refrence to that string binary
let y=22;
// y is signed 32bit integer (fixed size)
b()
}
fn b(){
let s=String::from("something");
// s is of type String which could be dynamic in size so it is allocated in heap and pointer to that string is returned back which is stored in s on stack 
// allocating in heap is slower than pushing in stack because heap has to search for the memory
// access of data is faster on stack but not in heap because it has to follow the pointer
}
}
