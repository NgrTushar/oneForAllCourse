pub fn add_two(a:usize) -> usize {
    a+3// by writng this left will not equal to right
    // because of assert_eq!() will panic
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn it_works() {
        let result = add_two(2);
        //assert_eq!(result, 4);
        assert_ne!(result,4);
    }
}
