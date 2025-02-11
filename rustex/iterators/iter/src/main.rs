// Now we will see how iterators work
// all iterators in rust implements iterator trait which is defined in rust
// standard library and it looks like- 

pub trait Iterator{
type Item; // this is called associated type
fn next(&mut self)->Option<Self::Item>;
// this tells us that when implementing the iterator trait you also have to define 
// item type and that type is returned from our next method 
// when it reaches end it returns none until then it returns item wrapped in some
}
#[test]
fn test_iterator(){
let v1=vec![1,2,3];

let mut v1_iter=v1.iter();
// if we want mutable references write v1.iter_mut() 
// if we want our type v1.into_iter()
assert_eq!(v1_iter.next(),Some(&1));
assert_eq!(v1_iter.next(),Some(&2));
assert_eq!(v1_iter.next(),Some(&3));
assert_eq!(v1_iter.next(),None);

}

fn main(){
let v1=vec![1,5,6];
let v1_iter=v1.iter(); // iterator over the vector,  iterator can be created
                       // by calling v1.iter(), In rust iterator are lazy 
                       // nothing happens until they are used 

for value in v1_iter{
println!("got: {}",value);
}

}
