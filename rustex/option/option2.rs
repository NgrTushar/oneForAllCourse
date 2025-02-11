fn main(){
value_in_cents(Coin::Quarter(IndState::Manipur));
}
#[derive(Debug)]
enum IndState{
Rajasthan,
UttarPradesh,
Gujrat,
Manipur
}

enum Coin{
Penny,
Nickel,
Dime,
Quarter(IndState)
}

fn value_in_cents(coin:Coin)->i8{
match coin{
Coin::Penny=>1,
Coin::Nickel=>10,
Coin::Dime=>15,
Coin::Quarter(state)=>{
println!("state Quarter from: {:?}!",state);
25
}
}
}
