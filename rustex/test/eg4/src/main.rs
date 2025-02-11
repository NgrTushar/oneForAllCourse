struct Foo<'a>{
bar:&'a i32
}
fn baz(f:& Foo)->& 'a i32{

}
fn main() {
    println!("Hello, world!");
}
