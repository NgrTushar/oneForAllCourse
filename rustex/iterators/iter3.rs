//iterator trait has various implementation which has default implementations
//provided by standard library 
// Two categories of methods - adaptors which takes an iterator and returns 
// another iterators  and consumers which takes an iterator and returns
// another type such as an integer, collection or any other type
// Some of these methods call the next method in their definition,
// which is why you’re required to implement the next method when implementing 
// the Iterator trait. 
// Methods that call next are called consuming adaptors, because calling them 
// uses up the iterator. One example is the sum method, which takes ownership
// of the iterator and iterates through the items by repeatedly calling next, 
// thus consuming the iterator. As it iterates through, it adds each 
// item to a running total and returns the total when iteration is complete. 
// call on v1_iter is not allowed after calling sum 

/*pub trait Iterator{
type item;
fn next(& mut self)->Option<self::Item>; 
}*/
#[test]
fn iterator_sum(){
let v1=vec![1,4,6];
let v1_iter=v1.iter();
let total:i32=v1_iter.sum();
assert_eq!(total,11);
}


fn main()
{
let v1=vec![1,4,6];
let v1_iter=v1.iter();
for value in v1_iter{
println!("Value {}", value);
}
}

