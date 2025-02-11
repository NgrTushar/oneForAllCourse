use std::ops::Deref; 
// bringing it in the scope 

// to understand how box pointer works we will create our own Box pointer
struct MyBox<T>(T); // tuple struct which holds one generic value
impl <T>MyBox<T>{
fn new(x:T)->MyBox<T>{
MyBox(x)
}
}
impl<T> Deref for MyBox<T>{
type Target=T; // associated types 
// deref trait require tha we implement one method called deref which takes
// reference to self and returns refernce to inner data can also be 
// written as &Self::Target
fn deref(&self)->&T{
 &self.0 // returning first item in our tuple because MyBox is a tuple struct
}
// after implementing this when we will use dereference operator
// it will return reference to the item stored in our tuple struct 
}


fn main(){
let x=5;
let y=MyBox::new(x);
println!("{}",*y);// need to implement deference ability to use MyBox smart ptr
                  // like this
assert_eq!(5,x);
assert_eq!(5,*y);
assert_eq!(x,*(y.deref())); // you can call deref method explicitly but
                            // it is not necessary because compiler does it
                            // automatically
// deref method returns reference because it were to return value it will 
// transfer ownership 

let m=MyBox::new(String::from("deref coercion"));
hello(&m);
// here we dont even have error even m is type MyBox and we are passing reference
// MyBox while hello function expects string slice
// &MyBox<String> if we call deref to m the we get &String and String type in 
// rust also implements deref trait and if we call deref on our String 
// we get back string slice &str
// rust compiler does all this automatically  

}
// deref coercions happens automatically for type which implements 
// deref coercions convert reference to one type to a reference to a 
// different type 
fn hello(name: &str){
println!("{}",name);
}
