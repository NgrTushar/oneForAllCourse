pub fn greeting(name:&str)->String{
format!("Hello {}",name)
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn greeting_contains_name() {
        let s=greeting("Carol");
        assert!(s.contains("Carol"),
            "greeting did not contain name, value was {}",s);
        
        // assert also takes custom failure message

    }
}
