// concurrent programming exist when different parts of your program executes
// differently parallel programming is when different parts of the programming '
// executes at the same time 
// executed is ran within a process and that Operating system manages running 
// multiple process at once withing a program you could have independent parts
// that run simultanously and feature is- that run these independent parts are 
// called threads and spliting program computation into multiple thread 
// can increase performance because multiple parts of you program running at
// the same time process  
//when you create a thread in a program it maps to operating system thread 
// there is one to one mapping in this rust only provides one to one mapping threads
// in standard library 
//
use std::thread;
use std::time::Duration;
fn main(){
// we have spawned a thread and printed number at each cycle and paused the thread 
// for 1 milli second
thread::spawn(||{
for i in 1..10{
println!("output from spawn thread {}",i);
thread::sleep(Duration::from_millis(1));
}
});
for i in 1..5{
println!("output from main thread {}",i);
thread::sleep(Duration::from_millis(1));
}
}
// you can see the output spawn thread did not finished priinting all the numbers
// but main thread did, when the main thread ends spawn thread is stopped 
// no matter what following example will cover how you let spawn thread to finish
// cc1.rs-->>
