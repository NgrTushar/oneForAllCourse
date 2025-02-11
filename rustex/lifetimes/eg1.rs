// dangling refrences are which points to invalid data
fn main(){
let r;
{
let x=5;
r=&x;
}
// x will live only till inner scope
println!("r:{}",r);
}
