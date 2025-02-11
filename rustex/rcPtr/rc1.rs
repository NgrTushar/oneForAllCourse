use std::rc::Rc;
#[derive(Debug)]
struct Truck {
capacity:i32,
}

fn main(){
let (truck_a,truck_b,truck_c)=
    (Rc::new(Truck{capacity:1}),
     Rc::new(Truck{capacity:2}),
     Rc::new(Truck{capacity:3}));
let facility_one=vec![truck_a,Rc::clone(&truck_b)]; // calling clone method and
                                                  // passing reference of truck_b
// second element of the first vector points to the same memory as first
// element of the first vector so we didnt actually make a copy of underlying
// structure we just have two pointers point to the same memory
// main no longer own truck_b we dont know what gonna happen with these two
// vector may be they will be deallocated or modified 
let facility_two=vec![truck_b,truck_c];// if you compile with this line you can 
                                       // see that value was moved in last one 
//println!("truck_b ownership {:?}", truck_b);
println!("Facility One {:?}", facility_one);
println!("Facilty Two {:?}",facility_two);
std::mem::drop(facility_two);
println!("Value of facility_one after drop {:?}",facility_one);
println!("facility_two{:?}",facility_two);

}
