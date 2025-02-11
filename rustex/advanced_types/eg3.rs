 fn main (){
let list_of_numbers=vec![1,2,4];
let list_of_strings:Vec<String>=list_of_numbers.iter().map(|x| x.to_string()).collect();
println!("{:?}",list_of_strings);
 }
