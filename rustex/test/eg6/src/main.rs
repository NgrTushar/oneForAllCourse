struct MyNumber{
    value:i32,
}
fn print_my_number<T: Into<MyNumber>>(input: T) {
    let my_number: MyNumber = input.into();
    println!("MyNumber value: {}", my_number.value);
}
impl From<i32> for MyNumber {
    fn from(item: i32) -> Self {
        MyNumber { value: item }
    }
}
fn main() {
    // Both `i32` and `MyNumber` can be used
    print_my_number(100);        // `i32` automatically converted to `MyNumber`
    print_my_number(MyNumber { value: 200 });
}

