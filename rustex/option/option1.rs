fn main(){
let x=1;
let y: Option<i8>=None;
let sum= x + y.unwrap_or(0);
println!("{}",sum);
}
