fn main(){
let mut v=vec![12,22,34,45];
let v_mod=vec_loop(&mut v); // if passed as a mutable refrence 
let v_mod1=vec_map(v_mod.clone());
println!("v_mod: {:?}",v_mod);
println!("v_mod1: {:?}",v_mod1);
println!("v: {:?}",v); // same as v_mod cause it was passed as mutable
// reference,original value was changed
}

fn vec_loop(vec:&mut Vec<i32>)-> &mut Vec<i32>
{
for i in vec.iter_mut(){ //iter_mut() returns mutable refrence 
// &mut Vec<i32> 
*i*=2; //can also be written as*i=*i*2 value needs to be defrenced
// to reach to that i32 value because it returns &mut Vec<i32>
// i will have something which can be used to access elements of vec
}
vec
}

fn vec_map(v: Vec<i32>)->Vec<i32>{
v.iter()
  .map(|num|{
    num*2
  })
  .collect()
}
