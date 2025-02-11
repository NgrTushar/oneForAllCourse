// in this example we will see how default implementation of trait gets
// executed
// it only gets executed if trait implementation for some type is
// not present
// we are implementing another function summarize_author in trait
// which gets called in by summarize fn in trait implementation
// summarize_author has to be defined in implementation for Tweet
// same goes for NewsArticle because summarize_author does not have 
// default implementation in our trait Summary so it needs to be
// defined in Summary

pub struct NewsArticle{
pub headline:String,
pub author:String,
pub content: String
}

impl Summary for NewsArticle{
fn summarize_author(&self)->String{
format!("{}",self.author)
}
}

pub struct Tweet{
pub username:String,
pub content:String,
pub reply:bool,
pub retweet:bool
}

impl Summary for Tweet{
fn summarize(&self)->String{
format!("{}: {}",self.username,self.content)
}
fn summarize_author(&self)->String{
format!("{}",self.username)
}
}

pub trait Summary{
fn summarize(&self)->String
{
format!("(Read more..{})",self.summarize_author())
}
// for every type Summary is implemented it must have summarize method
// which will return a String
fn summarize_author(&self)->String;
}

fn notify(item:&impl Summary){ // takes refrence to something which
// implements Summary
println!("Breaking news! {}",item.summarize());

}
// this function is syntax sugar for trait bound
/*fn notify<T:Summary>(item:&T){
println!("Another Breaking news!!{}",item.summarize());
}*/

fn main(){
let tweet=Tweet{
username:String::from("@user1"),
content:String::from("Namaste"),
retweet:false,
reply:false
};
let newsarticle=NewsArticle{
headline:String::from("Bad weather"),
author: String::from("WeatherForecast"),
content: String::from("heavy rain in many parts of the city"),
};
println!("Tweet Summary:{}",tweet.summarize());
println!("News Summary: {}", newsarticle.summarize());
notify(&newsarticle);
}
