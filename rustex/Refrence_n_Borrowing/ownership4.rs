fn main()
{
let s1=String::from("Something");
let (s2,len)=calculate_length(s1);// this function will take ownership of s1 
// you wont be able to print content of s1 if you tried compilation error would occur
println!("the Length of {} is {}",s2,len);
}
// question is how to pass it without giviing ownership you go with passing as a reference

fn calculate_length(s:String)-> (String,usize) {
let length=s.len();
(s,length)
}
