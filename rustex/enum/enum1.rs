enum IpAddressKind{
V4(String),
V6(String)
}

//enum varient can store different types of data
enum IpAddressKind2{
V4(u8,u8,u8,u8),
V6(String)
}

struct IpAddr
{
kind: IpAddressKind,
address:String
}


fn main(){
let localhost=IpAddressKind::V4(String::from("127.0.0.1"));
let localhost=IpAddressKind2::V4(127,0,0,1);

}
