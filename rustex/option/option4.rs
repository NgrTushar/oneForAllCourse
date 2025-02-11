fn main(){
let x=Some(6);
match x{
Some(5)=>println!("Five"),
_ => (),
}
println!("{:?}",x);

let value=Some(5);

if let Some(5)=value{
println!("Five");
}

}


