use std::thread;
fn main(){
let v=vec![1,2,3];
// want to print out vector from main thread in spawn thread
let handle=thread::spawn(move || {
println!("vector elements: {:?}",v);
});
// imagine if you used drop(v) and once thread is spawned it will switch back to
// main thread and main thread will drop the value v and it will be invalid
// once it gets back to the spawned thread
// solution is use move keyword in closure
handle.join().unwrap(); // so that main thread waitsfor spawn thread to finish
                        // execution
}
