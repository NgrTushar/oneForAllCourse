use std::collections::HashMap;
fn main()
{
let mut scores=HashMap::new();

scores.insert(String::from("Blue"),10);
// takes key Blue insert it against the value 10 
scores.insert(String::from("Blue"),15);
// this does same but it overides the key Blue with value 30
// if you dont want to overide youcan use insert_or() method 
scores.entry(String::from("Red")).or_insert(20);
// if there is no entry for key Red then insert it with the value 20
scores.entry(String::from("Red")).or_insert(60);
// this wont do anything because Red key already exist
println!("{:?}",scores);

}
