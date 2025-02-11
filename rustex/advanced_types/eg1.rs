// in following example eg2.rs we will write a function  which can take in 
// function pointer as well as closure
fn add_one(x:i32)->i32{
x+1
}
fn do_twice(f:fn(i32)->i32,arg:i32)->i32{
    // In parameter we defined a function signature which takes i32 value and 
    // returns i32 value
    // fn is itself a type of function pointer
f(arg)+f(arg)
}
// here we are passing functions to function we do have learnt how to pass closure
// to a function but in this case you can pass function which is already 
// defined instead of creating a new closure 
// when passing function to another function we can use a function pointer which 
// is specified by lower case fn 
fn main(){
let answer=do_twice(addone,9);
println!("Answer - {}",answer);
}

