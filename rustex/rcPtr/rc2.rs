enum List{
Cons(i32,Box<List>),
Nil,
}
use List::{Cons,Nil};
fn main(){
let a=Cons(5,Box::new(Cons(10,Box::new(Nil))));
let b=Cons(4,Box::new(a));
let c=Cons(3,Box::new(a));
}
