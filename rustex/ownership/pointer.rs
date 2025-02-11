fn main()
{
let a=[4;1_000_000];
let b=a; // this will copy all 1 mil elements to b variable
// to avoid this there is something called Box construct
// it allows you to use heap from where you can use pointers efficiently
// it can be done by wrapping all the data in - Box::new()
let c=Box::new([5;1_000_000]);
// it looks like it return a pointer which can be hold by one owner at a time 
let d=c; // moves ownership of the box from c to d
println!("{:#?}",d);
}
