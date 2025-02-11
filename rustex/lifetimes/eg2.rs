// follow up eg3.rs where string1 and string2 will have different 
// lifetime
fn main(){
let string1=String::from("something");
let string2=String::from("whatever");
let result=longest(string1.as_str(),string2.as_str());
println!("The longest string is {}",result);
}
//&i32 Refrence
// &'a i32 // refernce with explicit lifetime
// &'a muti i32 // a mutable refrence with an explicit lifetime


fn longest<'a>(x:&'a str,y:&'a str)->&'a str{
if x.len()>y.len() x  else y
}
// x and y can have different lifetime so
// if this function longest getscalled from many different places
// then x and y would have many different lifetimes
// using generic lifetime annotations <'a>
// here we annotated that x y and return type will have same lifetime
// but this is not the case 
// generic lifetime annotation does not actually change the 
// lifetimes it build relationship b/w lifetimes of multiple refrences
// here lifetime of the returned reference will be the same as 
// the smallest lifetime of the arguments 
// so if x has smaller lifetime as of y then the lifetime of the 
// returned refrence will be same as x viceversa
// how does the borrow checker know that result is not a dangling
// refrence here????
// whatever returned from longest will have lifetime equal to the
// smallest lifetime being passed in, so borrow checker just have
// to figure out that what is the smallest lifetime is it 
// string1 or string2 
