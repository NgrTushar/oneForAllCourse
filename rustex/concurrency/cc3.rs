use std::sync::mpsc;
use std::thread;
// there acan be multiple producers of messages but only ome receiver of messages
//
fn main(){
let (tx,rx)=mpsc::channel();

// in Order to use sender to send a msg we need to move tx into closure 
// if we remove the move the keyword we will get an error which states that 
// its not safe to share sender between the threads
thread::spawn(move || {
let msg=String::from("hi");
tx.send(msg).unwrap();
});
// will be using receiver in a main thread to receive a msg 
let received= rx.recv().unwrap();
println!("Got - {}",received);
// recv() method blocks the main thread execution while awaits for the msg
// or a value to be sent down the channel
// try_recv() method does not block the execution instead it will return
// result type immediatly result type will be Ok() variant if the value is
// available or it will be error if no values are available 
// try_recv() is good when you want your thread to do other work
// for example we can have loop every so often we call try_recv() to see if there
// are any new messages  otherwise we let the thread do other work
// in this example we will use recv() method for simplicity 

}
