use std::collections::HashMap;
fn main(){
let blue=String::from("Blue");
let orange=String::from("Orange");
let mut scores= HashMap::new();
scores.insert(blue,10);
scores.insert(orange,15);
//println!("{blue}"); // cannot borrow after move
// get values by specifying keys in get method
let team_name=String::from("Blue");
let score=scores.get(&team_name); 
println!("score of team {score:?}");
// get method takes reference to a key and returns optional value
// optional value because we might not know whether it is present 
// or not, returns None if not present 

//iterating over a hashmap 
for (key,value) in &scores {
println!("{}-{}",key,value);
}

}
