struct Point{
x:i32,
y:i32,
}
fn main(){
let p=Point{x:0,y:7};
println!("{:?}",p.x);
// here struct is getting constructed not destructed so we cannot use x
// as a variable here only way to access x is by accessing it through p
// which holds struct Point
let Point{x:a,y:b}=p; // deconstructing point struct and creating two 
                      // variable a and b a will be mapped to the value 
                      // inside of x likewise for b and y
// you can also take the name of the variable same as struct  field name 
// Point {x,y}=p like this
}
