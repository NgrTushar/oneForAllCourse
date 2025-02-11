/*If you implement a method with the same name as the trait method directly on the Dog struct, the method defined in the impl block for the Dog struct will take precedence when you call the method on an instance of Dog. However, if you explicitly use the trait's method, the trait implementation will be called.*/
// follow up ex1.rs to know how to call it explicitly


trait MakeNoise {

  fn make_noise(&self) {

    println!("(silence)");

  }

}


struct Dog {}
impl Dog{
fn make_noise(&self){
println!("bow bow..");
}
}

struct Cat {}


impl MakeNoise for Dog {

  fn make_noise(&self) {

    println!("bark");

  }

}


impl MakeNoise for Cat {}


fn main() {

  let dog = Dog {};

  let cat = Cat {};

  dog.make_noise();

  cat.make_noise();

}
