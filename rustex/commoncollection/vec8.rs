// now our function fill_vec does not take 
fn main(){
let mut vec1=fill_vec(); 
vec1.push(45); // on this line
println!("vec1 length: {}, elements: {:?}",vec1.len(),vec1);
}

fn fill_vec()->Vec<i32>{
let mut vec=vec![];

vec.push(10);
vec.push(23);
vec.push(54);
vec.push(20);
vec
}
