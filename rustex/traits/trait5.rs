// will be defining a vehicle that can both float and drive
// for that we will define another trait called Amphibious
// Amphibious not gonna have any specific methods but we will make sure that 
// anything that implements amphibious trait implements both LandCapable
// and WaterCapable 
trait WaterCapable{
fn float(&self){
println!("Default float");
}
}

trait LandCapable{
fn drive(&self){
println!("Default drive")
}
}

trait Amphibious:LandCapable + WaterCapable{} // defining with super traits 
struct Hovercraft;
impl LandCapable for Hovercraft{
fn drive(&self){
println!("HoverCraft is driving");
}
}
impl WaterCapable for Hovercraft{}
impl Amphibious for Hovercraft{}
fn traverse_frozen_lake(vehicle:&impl Amphibious)
{
vehicle.drive();
vehicle.float();
}
fn main(){
let hc=Hovercraft;
hc.drive();
hc.float();
traverse_frozen_lake(&hc);
}


