fn main(){
//there can only be one owner at a time 
// each value in Rust has a variable thats called its owner
// when the owner goes out of scope the value will be dropped
{// this is the scope 
let s="string";
// s is valid here
}//after this s is dropped and not valid after this scope
{
let s=String::from("Something");
// memory is allocated on heap 
// In C++ When memory is allocated on heap by using new keyword it needs to be deleted/deallocated manually be delete keyword
// But here it is done automatically by the compiler because it writes extra code for us
}

}
