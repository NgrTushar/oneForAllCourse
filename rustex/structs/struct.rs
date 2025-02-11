#[derive(Debug)]
struct User{
username:String,
email:String,
sign_in_count:u64,
active:bool,
}

fn main(){
let mut user1=User{
username:String::from("vishnu"),
email:String::from("vishnu@gmail.com"),
active:true,
sign_in_count:1
};

let name =user1.username;
println!("{name}");
// when you make user1 variable mutable you can change fields in struct user1
//let name= user1.username=String::from("ram"); // here no returned value is needed
// also used as return type where a function that returns nothing return unit type '()'
user1.username=String::from("ram");
println!("{:?}",name);//this will ensure that while printinig the value it will show 
// the structure and type of that value
println!("{}",user1.username);
let user2=build_user(String::from("mahesh@gmail.com"),String::from("mahesh"));
println!("username: {username} - email: {email} - signincount: {sign_in_count} - active: {active}",username=user2.username,email=user2.email,sign_in_count=user2.sign_in_count,active=user2.active);

let user3=User{
username: String::from("brahma"),
email: String::from("brahma@gmail.com"),
..user2
};
println!("{:?}",user3);
}


fn build_user(email:String,username:String)->User{
 User{
email, //field init short hand syntax
username,
sign_in_count:1,
active:true
 }
 }
