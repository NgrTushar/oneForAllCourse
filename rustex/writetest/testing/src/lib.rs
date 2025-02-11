struct Rectangle{
    width:u32,
    height:u32
}
impl Rectangle{
    fn can_hold(&self,other:&Rectangle)->bool{
        self.width>other.width && self.height>other.height

    }
}

pub fn add(left: usize, right: usize) -> usize {
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
    /*#[test]
    fn failing_test(){
        panic!("Failing this test");
        // this will fail the test because we paniced,after running cargo test
    }*/
    #[test]
    fn larger_can_hold_smaller(){
        let larger=Rectangle{
            width:6,
            height:8
         };
         let smaller=Rectangle{
            width:4,
            height:3
        };
         assert!(larger.can_hold(&smaller));

    }
    #[test]
    fn smaller_can_hold_larger(){
        let larger=Rectangle{
            width:6,
            height:8
         };
         let smaller=Rectangle{
            width:4,
            height:3
        };
         assert!(!smaller.can_hold(&larger));
         // using ! to make it true if false is returned
    }
}