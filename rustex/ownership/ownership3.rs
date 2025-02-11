fn main()
{
let s1=gives_ownership();
println!("{s1}");
}

fn gives_ownership()->String{
let s=String::from("whatever");
s
}
