pub mod point {

  #[derive(Debug)]

  pub struct Point(pub i32, pub i32);


  impl Point {

    pub fn origin() -> Self { Point(0, 0) }

  }

}


fn main() {

  let mut p = point::Point::origin();

  p.0 += 1;

  println!("{p:?}");

}
