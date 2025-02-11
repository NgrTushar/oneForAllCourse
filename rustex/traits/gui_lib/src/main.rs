use gui_lib::{Draw, Screen, Button};
// this is how consumer of the library can use its components
struct SelectBox{
width:u32,
height:u32,
options:Vec<String>
}
impl Draw for SelectBox{
fn draw(&self) {
}}
fn main() {
  let screen=Screen{
    components:vec![
Box::new(SelectBox{width:100,height:50,options:vec![String::from("new"),String::from("old"),]}),
Box::new(Button{height:50,width:100,label:String::from("Ok")}),
    ],
  };
  screen.run();
}
