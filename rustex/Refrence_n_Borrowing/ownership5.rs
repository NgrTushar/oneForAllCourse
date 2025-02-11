fn main()
{
let s1=String::from("Something");
let len=calculate_length(&s1);// passing as a refrence 
println!("the Length of {} is {}",s1,len);
let mut s2=String::from("Something");
let len=calculate_length_mod(& mut s2);// needs to be borrowed as mutable to make changes
println!("The Length of {} is {}",s2,len);
}
// question is how to pass it without giviing ownership you go with passing as a reference


fn calculate_length(s:&String)-> usize {
//s.push_str("Wrong");// you cannot modify string if passed as a refrence
// lead to compilation error uncomment it to learn more
let length=s.len();
length
}
// you want to modify string then you need to change the variable passed in function 
// to mutable like done in s2 variable 
fn calculate_length_mod(s:&mut String)-> usize {
s.push_str("Wrong");// you cannot modify string if passed as a refrence compilation error
let length=s.len();
length
}
