 fn main(){
let x =5;
match x{
1..5=>println!("value matched between one to five"),
_=>println!("Value Not in the range one to five"),
}
// when writing 1..5 this it represents exclusive range wont include 5
// same in matching character in below example j and z are not included
// you can change it to inclusive range like 1..=5 which will also include
// 5 likewise a..=j will include j and will allow you to match for j as well
let x='j';
match x{
'a'..'j'=>println!("Ascii value in Decimal 97 - 106"),
'k'..='z'=>println!("Ascii value in Decimal 107- 122"),
_=>println!("Something else"),
}

}
