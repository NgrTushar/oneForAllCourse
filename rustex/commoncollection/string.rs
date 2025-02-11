fn main(){
let mut s=String::from("good");
s.push_str("work");
s.push('!');
println!("string s : {s}");
let s1=String::from("Namaste");
let s2=String::from("World!");
let s3=s1+&s2;
format!("{}{}",s1,s2);
// format macro does not take ownership
println!("{s3}");
println!("{s1}");// value cant be borrowed of moved value
}
