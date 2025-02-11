struct ImportantExcerpt<'a> {
    part: &'a str,
}
// lifetime annotations are generics 
// just like generics we need to specify them in angle brackets <>
// just after impl keyword and after name of the struct


impl<'a> ImportantExcerpt<'a> {
    fn announce_and_return_part(&self, announcement: &str) -> &str {
        println!("Attention please: {}", announcement);
        self.part
    }
}
// in this function announce and return part there is a reference to
// self so all output lifetimes will be assigned lifetimes same as
// self
fn main() {
    let novel = String::from("Call me Ishmael. Some years ago...");
    let first_sentence = novel.split('.').next().expect("Could not find a '.'");
    let i = ImportantExcerpt {
        part: first_sentence,
    };
}
