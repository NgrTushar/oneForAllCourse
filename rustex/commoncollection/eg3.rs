fn main(){
let v =vec![1,5,3,6,7];
let fiveth=&v[4]; // this specify reference of vec to fiveth element
println!("Valid indexing: {fiveth}");
// we can access invalid index by this method to accessing vec elements
let invalid=&v[55];
println!("Invalid indexing : {invalid}");
// this will cause runtime out of bound error if we tried to access 
// that elements which is not present in the vec 
// in arrays if you tried to access the elements which are out of bound
// it will give you compilation error because size is known at 
// compile time
}
