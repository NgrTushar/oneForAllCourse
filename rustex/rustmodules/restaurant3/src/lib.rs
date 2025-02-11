mod back_of_house{
  pub struct Breakfast{// Breakfast has 2 properties
    pub toast:String,
    seasonal_fruit:String
  }  

  impl Breakfast { // implementation block
    pub fn summer(toast:&str)->Breakfast{
      Breakfast{
        toast:String::from(toast),
	      seasonal_fruit:String::from("peaches")
      }
    }
  }
}
pub fn eat_at_retaurant(){
  let mut meal =
    back_of_house::Breakfast::summer("butter toast");
    // 
    // as toast field is private to make it public and use pub on field itself
    meal.toast=String::from("jam toast");
  let meal2=back_of_house::Breakfast{
      toast:String::from("Wheat"),
      seasonal_fruit:String::from("mango") // cant create struct directly 
      // because seasonal fruit is private it can only be created through summer
      // function because the struct is publicly accessible to summer function

  }

}
