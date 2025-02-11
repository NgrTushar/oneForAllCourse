fn main(){
let p =Point{x:0,y:10};
match p{
Point{x,y:0}=>{println!("Point is on x-axis")},// here y value has to be zero to 
// match this statement 
Point{x:0,y}=>{println!("Point is on y-axis")},
Point{x,y}=>{println!("Point is on x-y axis")},
}

}
