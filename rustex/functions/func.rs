fn main(){
some_function(5);
}

fn some_function(count_till:u8){ // type annotation is required in parameter
println!("some");
for i in 0..count_till{ // by writing 3..count_till we created a range expression
// it can be any number from where you want to start your iteration not specifically 3..
println!("->> {} -- {}",i);
//you can also write your own range implementation
}
}
