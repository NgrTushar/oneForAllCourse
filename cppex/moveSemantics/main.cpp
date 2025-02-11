//in some cases you wont see the call to move constructor or copy constructor because 
//in linux copy elision and move elision is automatically done by the compiler

#include "Integer.h"
#include <iostream>

Integer Add(const Integer &a, const Integer &b)
{
Integer temp ;
temp.SetValue(a.GetValue() + b.GetValue()) ;
return temp ;
}
int main() 
{
Integer a(1), b(3) ;
a.SetValue(Add(a,b).GetValue());
return 0;
}
