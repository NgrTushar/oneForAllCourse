fn main(){
let x=5;
let y=x;//Copy
println!("{x}");

let s1:String=String::from("Whatever");
let s2:String=s1;// Move
println!("{s1}");//wont compile 

}
