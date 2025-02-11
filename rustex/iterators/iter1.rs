// iterator pattern allows you to iterate over sequence of elements regardless
// of how elements are stored for example elements could be stored in a array
// but they can also be stord in a hashmap, graph, or some custom data 
// iterating over an array is simpple you start at index 0 and you increament 
// the index but iterating over a map a custom data structure is not as 
// obvious so iterator will incapsulate that logic for iterating over these
// structure
fn main(){
let v1=vec![1,5,6];
let v1_iter=v1.iter(); // iterator over the vector,  iterator can be created
                       // by calling v1.iter(), In rust iterator are lazy 
                       // nothing happens until they are used 

for value in v1_iter{
println!("got: {}",value);
}
// iterators are part of rust standard library thats why it was used in for loop
// without any extra code 
// iterators can be implemented for any data structure and notice that with our
// for loop we dont have any logic which specify that how to iterate over
// sequence of elements we dont hava any logic how to iterate over elements
// because that logic is encapsulated within the iterator

}
