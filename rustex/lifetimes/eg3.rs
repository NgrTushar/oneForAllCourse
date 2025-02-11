// follow up eg4.rs
fn main(){
let string1=String::from("something");
{
let string2=String::from("different");
let result=longest(string1.as_str(),string2.as_str());
println!("The longest string is {}",result);
}
}

fn longest<'a>(x:&'a str,y:&'a str)->&'a str{
if x.len()>y.len() x  else y
}
// string2 lifetime will be only until string2 
// but this is valid because string2 will still be valid because 
// string2 is still valid when we try to print result
