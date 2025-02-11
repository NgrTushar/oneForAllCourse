fn main(){
let v=vec![12,22,34,45];
let v_mod=vec_loop(v.clone()); //to retain original value use .clone()
println!("{:?}",v_mod);
let v_mod1=vec_map(v_mod);// after giving ownership
//println!("{:?}",v_mod); // this wont compile 
println!("{:?}",v_mod1);
println!("{:?}",v);
}

fn vec_loop(mut vec: Vec<i32>)-> Vec<i32> //
{
for i in vec.iter_mut(){ //iter_mut() returns mutable refrence 
// &mut Vec<i32> 
*i*=2; //can also be written as*i=*i*2 value needs to be defrenced
// to reach to that i32 value because it returns &mut Vec<i32>
// i will have something which can be used to access elements of vec
}
vec
}

fn vec_map(v:Vec<i32>)->Vec<i32>{
v.iter()
  .map(|num|{
    num*2
  })
  .collect()
}
