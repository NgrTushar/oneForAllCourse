use std::io;
use std::thread;
use std::time::Duration;

fn main()
{
println!("Enter your product price");
let mut product_price=String::new();
io::stdin().read_line(& mut product_price).expect("Error in readiung line");
let product_price:u32=product_price.trim().parse().expect("Please type a number");
/*{
Ok(num)=>num,
Err(_)
};*/
thread::sleep(Duration::from_secs(1));
println!("Your Product price is- {product_price}");
thread::sleep(Duration::from_secs(1));
println!("Choose one: \n -->1.Test Your Luck!!!? for Better Offer \n -->2.Continue with !!BORING Offer");
thread::sleep(Duration::from_secs(1));
let mut option=String::new();
io::stdin().read_line(& mut option).expect("Error in readiung line");
let product_price:u32=product_price.trim().parse().expect("Please type a number");
println!("You Choose - {option} Option");

 let offer_price=if option==1 {
cal_offer(product_price)
 } 

 fn cal_offer()->f32
 {

 }

}
