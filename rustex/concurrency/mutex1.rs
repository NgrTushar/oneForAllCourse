use std::thread;
use std::sync::Mutex;
use std::sync::Arc;
fn main() {
    let counter = Arc::new(Mutex::new(0));
    let mut handles = vec![];

    for _ in 0..10 {
        let counter=Arc::clone(&counter);
        let handle = thread::spawn(move || {
            let mut num =counter.lock().unwrap();

            *num += 1;
        });
        handles.push(handle);
    }

    for handle in handles {
        handle.join().unwrap();
    }

    println!("Result: {}", *counter.lock().unwrap());
}
/*
 Problem in the Code
There is a logical bug in this code:

The move keyword is used to transfer ownership of the counter to each thread, but this results in each thread trying to take ownership of the same counter, leading to a compile-time error.

In Rust, Rc<T> is for single-threaded use because it lacks thread safety, as its reference counting is non-atomic. This makes it prone to data races when used across threads, and it doesn't implement the Send and Sync traits required for thread-safe operations.

Arc<T>, on the other hand, is thread-safe as it uses atomic reference counting, allowing safe sharing between threads. It implements Send and Sync, ensuring proper handling in multithreaded environments at the cost of slightly reduced performance due to atomic operations.
 */
