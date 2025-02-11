pub trait Draw{
fn draw(&self){}
}
// trait objects need to use some sort of pointer always
pub struct Screen{
    pub components:Vec<Box<dyn Draw>>,
}

impl Screen{

pub fn run(&self) {
for component in self.components.iter(){
component.draw();
}
}
}
pub struct Button{
    pub width:u32,
    pub height:u32,
    pub label:String,
}

impl Draw for Button{
fn draw(&self) {
    
}

}