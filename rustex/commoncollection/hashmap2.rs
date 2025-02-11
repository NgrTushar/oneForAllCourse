use std::collections::HashMap;
fn main(){
let text="five four fifty four";
let mut map=HashMap::new();
for word in text.split_whitespace(){
  let count =map.entry(word).or_insert(0);
  // enum representing the value at that key which could be 
  // existing value or no value 
  // if the word does not exist then it will add the word ad initialize
  // its value to zero, it returns mutable refrence to that value
  *count+=1; // derefrencing that value to modify it
}
println!("{:?}",map);

}
