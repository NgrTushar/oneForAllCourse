fn main(){
let str=first_word("namaste.i hope you are having a good day");
println!("string slice: {str}");
}
//1. each parameter that is a reference gets its own lifetime parameter

//2. if there is exactly one input lifetime parameter, that lifetime
// is assigned to all output lifetime parameters

// 3. if there are multiple input lifetime parameters, but one of them
// is &self or &mut self the lifetime of self is assigned to all 
// output parameters

fn first_word(s:&str)->&str{
let bytes=s.as_bytes();
for (i,&item) in bytes.iter().enumerate(){
  if item== b' '{
    return &s[0..i];
  }
}
&s[..]
}

