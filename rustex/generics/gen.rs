// generics,traits & lifetime are used to remove code duplication
fn main() {
    let number_list = vec![34, 50, 25, 100, 65];

    let mut largest = &number_list[0];

    for number in &number_list {
        if number > largest {
            largest = number;
        }
    }

    println!("The largest number is {}", largest);
// if we want to find largest number in one more vector and still  
// want to retain this vector largest number 
// we can just duplicate this above code and pass in another vector
    let number_list = vec![21, 31, 900,366, 45, 100,999];

    let mut largest = &number_list[0];

    for number in &number_list {
        if number > largest {
            largest = number;
        }
    }
    println!("The largest number is {}", largest);


}

