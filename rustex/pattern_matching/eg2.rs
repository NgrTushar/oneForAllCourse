 fn main(){
let authorization_status:Option<&str>=None;
let is_admin=false;
let group_id:Result<u32,_>="54".parse();
let id:Result<u8,_>="500".parse();
match id{
Ok(value)=>println!("value {}",value),
Err(e)=>println!("Error {}",e),
}
if let Some(status)=authorization_status{ // onthis line we are matching pattern
                                          // Some() on the variable authorization
                                          // _status taking the 
// if it is Some() variant then take the string slice and store it in 
// Some variant and map it to status variable
// if it doesnt match Some() variant like if it is None variant then go in
// else if block 
    println!("Authorization status: {}",status);
}else if is_admin{
    println!("Authorization Status: Admin");
} else if Ok(group_id)=group_id{ // shadowing will take place here
    // here we are matching the group id which is result type  and if it is
    // Ok variant then we take the integer stored in that Ok() variant 
    // and map it to group_id 

if group_id<30 {
println!("Authorization Status: Priviledged");
}else {
println!("Authorization Status: Basic");
}
}
else{
println!("Authorization Status: Guest");
}

