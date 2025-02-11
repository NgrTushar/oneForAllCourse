fn main(){
let string1=String::from("something");
let result=&str;
{
let string2=String::from("different");
let result=longest(string1.as_str(),string2.as_str());
}
println!("The longest string is {}",result);
}

fn longest<'a>(x:&'a str,y:&'a str)->&'a str{
if x.len()>y.len() x  else y
}
// Here result lifetime will be smallest lifetime passed in 
// which is in this case string2 lifetime which does not live long 
// enough more than the inner scope
// thats why this code is invalid cause result pointing to invalid
// data/ dangling pointer
// this code can be made valid by changing relationship of lifetime
// imagine if longest only returns x then you can remove
// lifetime annotation 'a from y in parameter thats how 
// refrence returned live long enough 
