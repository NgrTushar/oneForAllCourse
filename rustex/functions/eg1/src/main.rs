
use rand::Rng;
fn main()
{
let mut x=10;
while x>0{
let secret_number=rand::thread_rng().gen_range(8..=15);
println!("{secret_number}");
x-=1;
let product_price=100;                                            
let product_price=product_price-(product_price*secret_number/100);
println!("Price after applying offer {product_price}");
}
}
