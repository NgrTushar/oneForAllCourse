use std::future::Future;

fn main() {
    println!("Hello, world!");
let x=foo2();
}
async fn foo1()->usize{
println!{"foo1"};
    0
}
fn some_function(){
    println!("execution of some_function");
}
fn foo2()-> impl Future<Output=usize>{
    async{
    println!("foo2");
    foo1().await;
    some_function();
    
    0
    }    
}
