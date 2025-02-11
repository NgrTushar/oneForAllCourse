// box ptr is cleaned up as soon as it goes out of scope what if you dont know
// what if you want to have multiple refrences to a memory and you dont know 
// in which order those refrences going to go out of scope and you need that 
// memory address to last until last refrence goes out of scope 
// this is where refrence counting comes into play 
// it is going to count number of references to that memory and it will keep that 
// memory alive until last reference goes out of scope one good example -
// we have some structure and we want reference to that structure be stored in
// miltiple data structure and we are not sure which data structure going out 
// of scope, But we want that memory address to be deallocated when no references
// to it remaining
use std::rc::Rc;
struct Truck {
capacity:i32,
}

fn main(){
let (truck_a,truck_b,truck_c)=
    (Truck{capacity:1},
     Truck{capacity:2},
     Truck{capacity:3});
let facility_one=vec![truck_a,truck_b]; // Compilation Error 
                                        // Error solved in follow up example
//truck_b value moved first then cannot be used after
// truck_b will get deallocated when main fucntion is done 
// even after we stop needing truck_b it 
//
let facility_two=vec![truck_b,truck_c];

}


