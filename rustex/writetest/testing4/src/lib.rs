// default every test gets its own thread
// each test is ran on different thread by default if main thread sees that
// test thread has died then main thread fails the test
#[cfg(test)]
mod tests {
    #[test]
    fn it_works()->Result<(),String> {
        if 2+2==4 {
            Ok(())
        } else {
            Err(String::from("condition is false"))
        }
    }
    #[test]
    fn it_works2(){
        assert_eq!(2+2,4);
    }
}
