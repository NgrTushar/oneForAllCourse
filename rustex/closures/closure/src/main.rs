// closures are like functions but they are anonymous 
// they can be stored as variables and passed in as input parameters 
// and they also capture variables in which they are defined 
//      
use std::thread;
use std::time::Duration;

fn simulated_expensive_calculation(intensity:u32)->u32{
println!("calculating slowly");
thread::sleep(Duration::from_secs(2));
intensity
}
fn main(){
let simulated_intensity=10;
let simulated_random_number=7;
generate_workout(simulated_intensity,simulated_random_number);

}
fn generate_workout(intensity:u32,random_number:u32){
    let expensive_result=simulated_expensive_calculation(intensity);
    if intensity<25 {
        println!("Do Pushups {}",expensive_result);
        println!("Do SitUps{}",expensive_result);

    }else{
        if random_number==3{
            println!("Take a break today, Remember to stay hydrated!!");
        }else{
            println!("Today, run for {} minutes!!",expensive_result);
        }
    }

}
