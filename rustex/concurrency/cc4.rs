use std::time::Duration;
use std::sync::mpsc;
use std::thread;
// there acan be multiple producers of messages but only ome receiver of messages
//
fn main(){
let (tx,rx)=mpsc::channel();
let tx2=tx.clone();

thread::spawn(move || {

let vals=vec![
    String::from("hi"),
    String::from("from"),
    String::from("the"),
    String::from("thread"),
];
// we will loop through our vector and send each msg
println!("before sending");
for val in vals{
println!("Sending...");
tx.send(val).unwrap();
thread::sleep(Duration::from_secs(1)); 

}
println!("finished sending");
   
});
// value is moved in previous thread error occurs
// to solve this we will make a copy of tx
thread::spawn(move || {

let vals=vec![
    String::from("bye"),
    String::from("nobody"),
    String::from("is"),
    String::from("here"),
];
// we will loop through our vector and send each msg
println!("before sending");
for val in vals{
println!("Sending...");
tx2.send(val).unwrap();
thread::sleep(Duration::from_secs(1)); 

}
println!("finished sending");
   
});

println!("before received");
for received in rx{
    println!("receiving.. ");
println!("Got - {}",received);
}
println!("after received");

}
