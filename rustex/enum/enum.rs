#[derive(Debug)]
// enum can capture the IpAddressKind here
enum IpAddressKind{
V4,
V6
}
//if we need actual now How do we handle that?
// So here Struct comes handy
// IpAddress struct allows us to group the version of the Ip Address with the 
// actual address 
#[derive(Debug)]
struct IpAddress{
kind:IpAddressKind,
address: String
}

// ENUM can store wide variety of types :
enum Message{
Quit,// a varient that stores no data 
Move{x:i32,y:i32}, // stores anonymous struct
Write(String),// single String 
ChangeColour(i32,i32,i32)// 3 integer 
}
// Associated function and methods can be also be made in enum just like we wrote for
// structs 
impl Message{
fn function1(){
println!("Implementation of Message enum");
}

}


// above enum can also be written as structs but the issue is that the all
// DIFFERENT TYPES 

// Benefits of ENUM are it can be grouped under the same message type
struct QuitMessage; // unit struct
struct MoveMessage{ 
x:i32,
y:i32
} 
struct WriteMessage(String); // tuple struct
struct ChangeColour(i32,i32,i32); //tuple struct

fn main()
{ 
// creating instances for each of our variants which are namespace under identifier which
// is IpAddressKind here (:: -> path separator)
let four=IpAddressKind::V4;
let six=IpAddressKind::V6;
println!("{:?}",four);

fn route(ip_kind:IpAddressKind){
//
}

let local_host=IpAddress{
kind:IpAddressKind::V4,
address: String::from("127.0.0.1")
};
println!("{:?}",local_host);
}
