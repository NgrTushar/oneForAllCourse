//Follow up of closure      
// In earlier expample we were executing simulated_expensive_function
// no matter what if condition is executed
// here we will be refactoring this code using closure
// this code definetly works but 
// Still Our closure is runned twice so we need to wrap up the 
// Closure function defination in Our Cacher struct 
// Follow Up closure2
use std::thread;
use std::time::Duration;

fn simulated_expensive_calculation(intensity:u32)->u32{
    thread::sleep(Duration::from_secs(2));
    println!("calculating slowly");
intensity
}
fn main(){
let simulated_intensity=10;
let simulated_random_number=7;
generate_workout(simulated_intensity,simulated_random_number);

}
struct Cacher<T>
where 
    T:Fn(u32)->u32,
{
    calculation:T,
    // calculation can be any closure that meets trait bound Fn(u32)->u32
    value:Option<u32> // optinal 32 bit integer 
}
impl <T> Cacher <T>
where
    T:Fn(u32)->u32
{
    fn new(calculation:T)->Cacher<T>{
        Cacher {
            calculation,
            value:None,
        }
    }
// this is value method because it takes self argument
    fn value(&self,arg:u32)->u32{
        match self.value{
            Some(v) =>v,
            None=>{
            let v=(self.calculation)(arg);
            self.value(v);
            v
        }
    }
    // inside this function we are doing match expression on self.value
    // we are checking self.value type and it is Optional type 
    // when we first use Cacher it will first set to None
    // we have created a variable v and called self.caculation which
    // store a closure that means we are calling a 
    // self.calculation closure and passing arg variable
    // self.value is where caching happens and then we return v

    }
}


fn generate_workout(intensity:u32,random_number:u32){
    let expensive_closure=|num:u32|->u32 {
        println!("Calculating slowly...");
        thread::sleep(Duration::from_secs(4));
        num
    };
    // In closure instead of inout parameters inside of 
    // paranthesis it is inside vertical pipes |_|
    // in closure we dont need to specify type it infers type automatically
    // we can specify it explicityly to make it visible
    // closure definations can only have one concrete type 
    // first type passed in to a closure would be a concrete type of
    // our input parameter 
    let example_closure=|x| x;
    let s=example_closure(String::from("namaste"));
    //let n=example_closure(5); // compilation error cannot change type
    if intensity<25 {
        // still we are calling expensive_closure twice this 
        // can be solved by creating variable on the top of this if 
        // block
        println!("Do Pushups {}",expensive_closure(intensity));
        println!("Do SitUps{}",expensive_closure(intensity));

    }else{
        if random_number==3{
            println!("Take a break today, Remember to stay hydrated!!");
        }else{
            println!("Today, run for {} minutes!!",expensive_closure(intensity));
        }
    }

}
