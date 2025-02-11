struct Range {
    start: i32,
    end: i32,
}

impl Iterator for Range {
    type Item = i32;

    fn next(&mut self) -> Option<Self::Item> {
        if self.start < self.end {
            let result = self.start;
            self.start += 1;
            Some(result)
        } else {
            None
        }
    }
}

fn main() {
    let count_till = 10;
    let mut range = Range { start: 3, end: count_till };

    while let Some(i) = range.next() {
        println!("{}", i);
    }
}

