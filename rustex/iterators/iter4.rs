// adaptor methods
// Iterator adaptors are methods defined on the Iterator trait that don’t consume
// the iterator. Instead, they produce different iterators by changing some aspect
// of the original iterator.
// an example of calling the iterator adaptor method map, which takes a closure 
// to call on each item as the items are iterated through. The map method 
// returns a new iterator that produces the modified items. The closure
// here creates a new iterator in which each item from the vector will be
// incremented by 1:
// map() is an adaptor method which takes in closure and which will calls closure
// over each element 
fn main()
{
let v1=vec![1,2,3];
let v2: Vec<_>=v1.iter().map(|x| x+1 ).collect();
// .collect() because map returns iterator and we are not using it iterator returned
// by the map so that we will get a warning if we dont use the iterator returned
// thats why we are collecting the elements of iterator by collect method which 
// takes and iterator and turns into a collection 
assert_eq!(v2,vec![2,3,4]);
}

