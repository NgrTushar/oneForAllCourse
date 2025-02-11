//using generics in structs
struct Point<T,U>{
x:T,
y:U
}

fn main(){
let p1=Point{x:5,y:10};
let p2=Point{x:1.0,y:2.0};
let p3=Point{x:5,y:8.0};
// p3 contains two different types 
// we can declare multiple generic types
}
