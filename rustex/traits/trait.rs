// A trait defines functionality a particular type has and can share 
// with other types. We can use traits to define shared behavior in an
// abstract way.
// A types behavior consists of the methods we can call on 
// that type. Different types share the same behavior if we can call
// the same methods on all of those types. Trait definitions are
// a way to group method signatures together to define a set 
// of behaviors necessary to accomplish some purpose.

// FOLLOW UP trait1.rs to know more about default implementation of 
// TRAITS

pub struct NewsArticle{
pub headline:String,
pub author:String,
pub content: String
}

impl Summary for NewsArticle{
fn summarize(&self)->String{
format!("{}\n{}\n   Posted by: {}",self.headline,self.content,self.author)
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
}

pub trait Summary{
fn summarize(&self)->String;
// for every type Summary is implemented it must have summarize method
// which will return a String
}

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
}
