// closure capture values of enviroment in three ways which
// directly maps to thefunction can take input parameters
// by taking ownership,by borrowing mutably, by borrowing immutably
//  these three ways to capture enviroment are encoded in 
//  the function traits we talk about earlier FnOnce,FnMut, Fn
// FnOnce takes ownership of varibles inside in the closure enviroment
// Once part specify that variables cannot take ownership of the
// variable more than once FnMut borrows value mutably anf Fn borrows
// immutably
// we acan force the closure to take ownership of the values uses
// in its environment by using move keyword in front of the closure
// This is useful When you pass closure to one thread to another thread
// so that you can also pass the ownership of the variables to one 
// to the other thread 
fn main() {
 
 let x=vec![1,5,6];
 let equal_to_x=|z| z==x;
 // here we are just evaluating x==z so we are tnot taking ownership of 
 // the variable we can use move keyword in front of closure defination 
 // move |z| z==x like this after this we wont be able to print x 
 // after it being moved
 
 println!("cant use x here {:?}",x);
 let y=vec![1,5,6];
 assert!(equal_to_x(y));

}
