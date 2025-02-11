//this code will throw a runtime error because as we have not specified copy constructor
// but compiler will do an because of line i2(i) copy of the same object will be created
// and when dectructor will get executed for both of the object which have same 
//memory address of pointer 'p' then after deleting one object it will again call for 
// another object and a pointer cannot be freed twice resulting in undefined behaviour

#include "integer.h"
#include <iostream>
int main()
{
int *p1=new int(8);
//shallow copy
int *p2=p1;// this copies only addresses any change in one of them will reflect on all
//in deep copy we copy the value at the address of a pointer not the pointer address
// deep copy
int *p3=new int(*p1);

Integer i(7);
Integer i2(i);
std::cout<<i.GetValue()<<"\n";
return 0;
}
