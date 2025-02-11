// three main characteristics oop languages share- Objects , encapsulation,
// Inheritance
// Objects are made out of data and methods that operates that data 
// In Rust structs and enums hold data and you can use implementation block to
// provide methods on structs and enums , structs and enums are not called objects
// but provides same functionality 
// Encapsulation- Implimentation details of an object are hidden from the code
// using that objects instead of changing the internals directly code outside of
// the object is limited to interacting  with the object through its public api 
// this enables the programmer to change the internals of the object without 
// changing the code which uses the object
// In rust everything is private by default 
pub struct AverageCollection{
list:Vec<i32>,
average:f64,
} // struct is cached here in a way that it doesnt have to be computed on demand 
  // everytime 
// pub keyword is used so that code outside if this library can use this struct 
// but both the fields are private because if something in list is updated
// means added or removed we want the average  to also change instead of 
// letting these fields directly we are goiung to create implementation 
// block that modify the internal state 
impl AverageCollection{
pub fn add(&mut self,value:i32){
self.list.push(value);
self.update_average();
}
pub fn remove(&mut self,value:i32)->Option<i32>{
let result=self.list.pop();
match result{
Some(value)=>{
self.update_average();
Some(value)
}
None=>None,
}
pub fn average(&self)->f64{
self.average
}
// here we have private method  thats how you encapsulated implementation details
// by updating average privately
fn update_average(&mut self){
let total=self.list.iter().sum();
self.average=total as f64/self.list.len() as f64;
}
}
}
// Inheritance is an ability of an object to inherit from another object 
// defination gaining the data and behaviour of the other object without 
// having to define data and behaviour itself 
// In rust you cannot define struct which inherits fields and methods  from another
// struct 
// for reusing the behaviour if a type have certain behaviour and you want 
// another type to inherit that behaviour for reusing that behaviour 
// In rust it can be accomplished by using default trait implementation  

