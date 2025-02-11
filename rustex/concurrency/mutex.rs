// mutex is a abbreviation for mutual exclusion
// mutual exclusion means- you have some piece of data and only one thread can 
// access that piece of data at any given time to achieve these mutexes 
// we use locking system when a thread wants access to a piece of data behind
// mutex they will signal that it wants access to that data and acquire the mutex's
// lock, lock is data structure which keep tracks of which thread has exclusive 
// access to the a piece of data. Once a thread has acquired a lock on a piece of
// data no other thread can access that data when the thread is done with that 
// piece of data it can unlock the data and allow other threads to have access to 
// it 
use std::sync::Mutex;

fn main(){
let m=Mutex::new(5);

{
let mut num=m.lock().unwrap();
*num=6;
}
println!("value after making changes-{:?}",m);
}
//When a Mutex is created, it is unlocked and the data it holds
//(5 in this case) is available, but access to this data requires 
//locking the mutex. m is a Mutex<i32> in this case, which means it is 
//a mutex that guards an i32 value.
//m.lock() attempts to lock the mutex. Locking the mutex ensures that no other
//thread can access the data inside the mutex while it is locked.
//If the mutex is already locked (e.g., another thread is holding the lock),
//m.lock() will block until the mutex becomes available.
//

/*If lock() is successful, it returns a Result, which is an enum that can be either Ok or Err. In this case, Ok contains a guard (a wrapper around the data), and Err represents a failure in locking the mutex.
unwrap() is called to extract the value from the Result. If locking the mutex fails (i.e., it returns Err), unwrap() will panic and terminate the program. Otherwise, it will return the guard to the locked value.

let mut num = m.lock().unwrap(); locks the mutex and assigns the guarded value 5 to num. The mut keyword indicates that num is mutable, so you can modify the value inside the mutex (although you are not modifying it in this case).

Once num is locked, you can access or modify the value inside the Mutex.

What happens after num goes out of scope?

When the num variable (which is a MutexGuard) goes out of scope (at the end of the inner block {}), the lock on the mutex is automatically released.
This is because MutexGuard implements the Drop trait, meaning that when it is dropped (i.e., when it goes out of scope), it unlocks the mutex, allowing other code to lock and access the mutex again.


2. What is this code doing overall?
The code is creating a mutex that holds the value 5. Then, in the inner scope, it locks the mutex using m.lock() and unwraps the result to get the locked value (5), assigning it to num.
After that, num goes out of scope, releasing the lock on the mutex. The program ends after that, and no modifications have been made to the value inside the mutex.
3. Why use a Mutex?
While this example shows Mutex being used in a single-threaded context, mutexes are generally used for thread-safe access to shared data in concurrent programs. The Mutex ensures that only one thread at a time can access the data it guards. If multiple threads tried to access the value without a mutex, there could be data races, which could lead to inconsistent or unexpected behavior.

Conclusion:
The Mutex ensures exclusive access to the shared value (5), and the lock is released automatically when the MutexGuard (num) goes out of scope. The code is a basic illustration of how a mutex works, even though it’s in a single-threaded context here. In real-world scenarios, mutexes are more useful in multi-threaded programs to avoid data races.
*/

