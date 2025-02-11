// using generic types to get largest character in the element 
// on line when comparing types it will show error because as we
// have declared generics it may be any type and not every type can
// can be compared
// this can be fixed using traits
fn get_largest<T: PartialOrd + Copy>(list: &[T]) -> &T {
    let mut largest = &list[0];

    for item in list {
        if item > largest {
            largest = item;
        }
    }

    largest
}

fn main() {
    let char_list = vec!['t','i','q','x'];

    let result = get_largest(&char_list);
    println!("The largest character is {}", result);

    let number_list = vec![102, 34, 6000, 89, 54, 2, 43, 8];

    let result = get_largest(&number_list);
    println!("The largest number is {}", result);
}
