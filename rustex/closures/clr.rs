fn main(){
let x=4;
let equal_to_x=|z| z==x;
let y:u32=4;
assert!(equal_to_x(y));
}
