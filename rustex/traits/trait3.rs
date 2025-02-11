// polymorphism means - ability to potentially treat same piece of data as different// types
// after this example our idea is - we want road trip to take anything that
// implements drive and call .drive() on that thing which will be done in follow
//  example trait4.rs

struct Sedan;
impl Sedan{
fn drive(&self){ // fn that takes shared reference to itself
println!("Sedan is driving");
}
}
struct Suv;
impl Suv{
fn drive(&self){ // fn that takes shared reference to itself
println!("Suv is driving");
}
}

fn road_trip(vehicle:&Sedan)
{
vehicle.drive();
}
fn road_trip_suv(vehicle:&Suv){
vehicle.drive();
}
fn main(){
let car=Sedan;
road_trip(&car);
car.drive();
let suv=Suv;
road_trip_suv(&suv);
}
