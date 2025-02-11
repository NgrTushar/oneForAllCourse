fn main(){
let vec0=Vec::new();
let mut vec1=fill_vec(vec0); // define vec1 mutable to push elements
vec1.push(45); // on this line
println!("vec0 length: {}, elements: {:?}",vec0.len(),vec0);
// compilation error: cant use vec0 after passing ownership
// use .clone() to use vec0 after passing as an argument
println!("vec1 length: {}, elements: {:?}",vec1.len(),vec1);

}

fn fill_vec(vec:Vec<i32>)->Vec<i32>{
let mut vec=vec;

vec.push(10);
vec.push(23);
vec.push(54);
vec.push(20);
vec
}
