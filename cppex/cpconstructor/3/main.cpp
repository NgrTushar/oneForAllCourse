// implementing user defined copy constructor
// How do we know which kind of classes will require user defined copy constructor and
// assignment operator then we should follow rule of 3
// Rule of 3 user should define all three destructor copy constructor and copy assignment
// operator if any one of the 3  is implemented
// so that destructor will free the resource, cpconstructor and cp assignment operator
// will perform deep copy
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
