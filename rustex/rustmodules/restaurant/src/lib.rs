// front of house where customers are 
// back of the house where food is being made and dishes are getting cleaned 
// module front_of_house contains two other modules hosting and
// serving which consists functions
mod front_of_house{
  mod hosting{
    fn add_to_waitlist{

    }  
    fn seat_at_table{

    }
  }
mod serving{
    fn take_order{

    }
    fn serve_food{

    }
    fn take_payements{

    }
  }
}




/*pub fn add(left: usize, right: usize) -> usize {
    left + right
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn it_works() {
        let result = add(2, 2);
        assert_eq!(result, 4);
    }
}
