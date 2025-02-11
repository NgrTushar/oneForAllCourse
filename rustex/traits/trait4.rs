trait LandCapable{
fn drive(&self);
}

struct Sedan;
// Here we wanna tell that drive method in this code block is to implement 
// LandCapable trait
impl LandCapable for Sedan{
fn drive(&self){ // fn that takes shared reference to itself
println!("Sedan is driving");
}
}
struct Suv;
impl LandCapable for Suv{
fn drive(&self){ // fn that takes shared reference to itself
println!("Suv is driving");
}
}
// Now we can make this road_trip method to take anything that implements
// LandCapable trait
// why cant we just write &LandCapable here because of zero cost abstraction
// in rust if there is any sort of added cost then you need to have add that 
// cost explicitly and dyn is a example of this
// dyn refers to dynamic dispatch in contrast to static dispatch 
// fm having dyn keyword in there parameters arguments passed into these fn
// will be represented by what called fat pointer is a collection of two pointers 
// one of which points to the data of the struct another which called as vtable 
// its has pointers to all functions the struct implements the downside of dynamic
// dispatch approach is that we incur a runtime penalty because we have to do 
// pointer deferences  to call any functions on the thing which got passed in
/*fn road_trip(vehicle:&dyn LandCapable)
{
vehicle.drive();
}*/

// alternative to dynamic dispatch is static dispatch
// Generics in c++ or rust creates copy of the entity that has a generics
// entity can be anything function struct etc.. , so it creates copy for each type
// it is being used. So assume road_trip function be the generics of type T
// it will look at every type potentially passed in and it will create copy
// of road_trip in compiled executable that would be less than ideal because if
//road_trip is called by lot of different types then it will result in 
// copy of road_trip for all those types and dynamic dispatch would be better 
// choice in that scenario, So it comes down to what you prefer 
// this is how you implemet static dispatch
fn road_trip(vehicle: &impl LandCapable)
{
vehicle.drive();
}

fn main(){
let car=Sedan;
road_trip(&car);
car.drive();
let suv=Suv;
road_trip(&suv);
}
