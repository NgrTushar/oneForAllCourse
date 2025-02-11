#include <iostream>
#include "Integer.h"
Integer Add(int a,int b)
{
Integer temp(a+b);
return temp;
}
void Print(Integer val)
{
}
int main()
{
//Integer a=23; //Integer a = Integer(23)
// although you cant see move constructor being called because compiler in linux is 
// performing move elision or copy elision here to optimize code 
//std::cout<<(&a)<<std::endl;
//std::cout<<*a.m_pInt<<&(a.m_pInt)<<std::endl;
Integer a(1);
//auto b{static_cast<Integer&&>(a)}; // by writing this we cant clarify our goal
//auto b{a};// by writing this we are makig clear that move constructor 
// should be used
// if we dont want the state of that object we can use copy like this-
std::cout<<a.GetValue()<<"\n";
Print(std::move(a));
//std::cout<<a.GetValue()<<"\n"; // this line will crash while execution
// because it is trying to access memory address which is not allowed to access
// because we  used std::move() and assigned nullptr to that pointer
// or else we use std::move(a) if we dont care about the state of the object a
//because it is gonna get destroyed when Print(Integer )function ends
// when object is moved it goes in unspecified state but you can reuse it by 
// reinitialising it
a.SetValue(10);
std::cout<<a.GetValue()<<"\n";
return 0;
}
