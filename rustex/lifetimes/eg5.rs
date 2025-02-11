struct ImportantExcerpt<'a> {
    part: &'a str,
}

fn main() {
    let novel = String::from("Call me Ishmael. Some years ago...");
    let first_sentence = novel.split('.').next().expect("Could not find a '.'");
    let i = ImportantExcerpt {
        part: first_sentence,
    };
}
// here instance is created after the String that novel holds and
// as first_sentence is passed as string slice
// instance wont outlive the firstsentence 
// struct cannot outlive the lifetime passed to the refrence
// if we tried using our struct in main after first-sentence 
// has gone out of scope

