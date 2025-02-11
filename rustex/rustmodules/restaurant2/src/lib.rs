//serve_order function is defined in parent module

fn serve_order(){}

mod back_of_house{
fn fix_incorrect_order(){
cook_order(); // able call because defined in same module
super::serve_order();
// super allows us to access parent module
}

fn cook_order(){}
}


