fn main(){
let vec0=Vec::new();
let mut vec1=fill_vec(vec0); 
println!("vec1 length: {}, elements: {:?}",vec1.len(),vec0);
vec1.push(45); 
println!("vec1 length: {}, elements: {:?}",vec1.len(),vec1);
}

fn fill_vec(mut vec:Vec<i32>)->Vec<i32>{

vec.push(10);
vec.push(23);
vec.push(54);
vec.push(20);
vec
}
