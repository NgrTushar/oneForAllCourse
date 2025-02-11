// in following example 
fn add_one(x:i32)->i32{
x+1
}
fn do_twice<T>(f:T,arg:i32)->i32
where T: Fn(i32)->i32
{ // do_twice<T> f:T this line specifies 
// generic T
// Introduced a trait bound where T is anything tha implements the Fn trait 
// which will allow us to pass a function pointer or a closure
f(arg)+f(arg)
}
// you need to use fn where you interface with external code that does not 
// support closure for example C language functions can accept functions as 
// argument but the C programming language does not support closure 
fn main(){
let answer=do_twice(addone,9);
println!("Answer - {}",answer);
}

