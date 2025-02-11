// box is a simplest smart pointer in rust its purpose is to enclose data needs to
// stored on heap instead of stack 

//
trait Vehicle{
fn drive(&self);
}
struct Truck; // struct called Truck which implements truck
impl Vehicle for Truck{
fn drive(&self){ // implement drive method 
println!("truck is driving");
}
}
fn main(){
    // what if we want to create a variable of type vehicle? 
//let t:Vehicle; // variable of type Vehicle // this shows an error recommends to 
               // safe 
// anytime we reference a trait we need to prefix it with dyn
let t:Box<dyn Vehicle>; // 
// & represents refrence indicates that t is a reference which is borrowed value
//
// dyn LandCapable specifies that this reference will point to some type that
// implements the LandCapable trait, but the specific type doesn’t need to 
// be known at compile time.
// In this case, t is a reference to an object that implements the LandCapable trait, but the compiler does not know (or care) what the concrete type is (e.g., Car, Truck, etc.). The actual type will be determined at runtime when a concrete type that implements the trait is assigned to t.
// In ideal scenerio So everything is stored on stack and it needs to know the 
// size at the compilation time but here Any thing can implement Vehicle trait and 
// size depends on whom gonna implement Vehicle trait 
// only solution is to store it on heap,
//
t=Box::new(Truck);
//  use cases- 1.variable of a trait type that cannot be computed on compile time 
// 2. recursive data types 
t.drive();

}
