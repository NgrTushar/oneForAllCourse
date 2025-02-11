// first we need to store the return value of spawn function which will be 
// JoinHandle type and call handle.join() which will wait for the thread to finish
// executing also need to call unwrap() because join returns result type
use std::thread;
use std::time::Duration;
fn main(){

let handle=thread::spawn(|| {
for i in 1..10{
println!("Output from spawn thread {}",i);
thread::sleep(Duration::from_millis(1));
}
});
//handle.join().unwrap(); if we call it here then main thread will wait for 
// the spawn thread to finish executing
for i in 1..5{
println!("Output from main thread {}",i);
thread::sleep(Duration::from_millis(1));
}
handle.join().unwrap();
// join() blocks the thread currently running which in this case is a main thread
// until the thread associated with the handle which is spawn thread  terminates
//
}
