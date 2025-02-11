fn main(){
let mut x=5;
let y=Box::new(x);
println!("x{} y{}",x,y);
x=6;
println!("x {} y {}",x,*y);
// this output proves that value is being copied instead of transfer of ownership
//Both y and *y end up printing the same value because:
// y implicitly dereferences the Box when printing (thanks to Rust's traits).
// *y explicitly dereferences the Box
// but if we implement our own smart pointer we need to implement deref trait to
// 
}

