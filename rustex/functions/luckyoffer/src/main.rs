use std::io;
use std::thread;
use std::time::Duration;
use rand::Rng;

fn main()
{
loop{
println!("Enter your product price");
let mut product_price=String::new();
io::stdin().read_line(& mut product_price).expect("Error in readiung line");
let product_price:f32=match product_price.trim().parse() {
Ok(product_price)=>product_price,
Err(_)=>{
println!("Invalid Input, Enter a number");
continue;
}
};
thread::sleep(Duration::from_secs(1));
println!("Your Product price is- {product_price}");
thread::sleep(Duration::from_secs(1));
println!("Choose one: \n -->1. Test Your Luck!!!? for Better Offer \n -->2. Continue with !!BORING Offer\n -->3. Exit");
thread::sleep(Duration::from_secs(1));
let mut option=String::new();
io::stdin().read_line(& mut option).expect("Error in readiung line");
let option:i32=match option.trim().parse() {
Ok(option)=>option,
Err(_)=>{
println!("Invalid Input, Enter a number");
continue;
}
};

println!("You Choose - {option} Option");

 let offer_price = if option<1 && option>3
 {
println!("Please Enter Valid Option!!!");
continue;
}else if option==3 {
 break;
 }else if option==1{
cal_offer(product_price)
 } else {
let product_price:f32= product_price-(product_price/10.0);
println!("Price after applying offer {product_price}");
product_price
 };
 thread::sleep(Duration::from_secs(1));
thread::sleep(Duration::from_secs(1));
println!("\n\n")
}
}
fn cal_offer(product_price:f32)->f32
 {
let offer=rand::thread_rng().gen_range(8..=15);
println!("{offer}");
let product_price:f32=product_price-(product_price*(offer as f32)/100.0);
println!("Price after applying offer {product_price}");
product_price
 }
