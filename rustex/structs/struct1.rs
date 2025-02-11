#[derive(Debug)]
struct Rectangle
{
width:u32,
height:u32
}


// can have multiple implementation blocks of same struct
impl Rectangle
{
fn square(size:u32)->Rectangle // Associated function
{
Rectangle{
width:size,
height:size
}
}
}

impl Rectangle // implementation block for Rectangle keyword
{
fn area(&self)-> u32{ //methods
println!("impl Rectangle Called");
self.width*self.height
}
fn can_hold(&self,other:&Rectangle)->bool //method
{
self.width>other.width && self.height>other.height
}
}
// functions and methods can be differentiated by self argument
fn main(){
let rect=Rectangle{
width:30,
height:50
};
println!("{:#?}",(&rect).area());
println!("{:?}",rect);
rect.area();
let rect1=Rectangle{
width:20,
height:40
};
let rect2=Rectangle{
width:40,
height:30
};
println!("rect can hold rect1 : {}",rect.can_hold(&rect1));
println!("rect can hold rect2 : {}",rect.can_hold(&rect2));

let rect3= Rectangle::square(50);
println!("{:?}",rect3);

}

