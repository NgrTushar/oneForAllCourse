fn main(){
#[derive(Debug)]
enum Language{
Hindi,
Russian,
Sanskirit,
Japanese,
}
let language=Language::Sanskirit;
let language=Language::Japanese;
match language{
    Language::Hindi=>println!("Supported langauge"),
Language::Sanskirit=>println!("Supported langauge"),
Language::Russian=>println!("Supported langauge"),
lang=>println!("Unsupported Language {:?}",lang),
}

}
