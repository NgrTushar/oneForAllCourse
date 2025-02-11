fn main(){
let mut stack=Vec::new();
stack.push(1);
stack.push(2);
stack.push(3);
while let Some(top) = Stack.pop(){
// Matching on result of Stack.pop() which returns an Option if the return
// value is a Some() variant then we will take integer assigned in Some()
// variant and then print it out
    println!("{}",top);
}
}
