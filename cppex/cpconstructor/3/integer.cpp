#include "integer.h"
#include <iostream>
Integer::Integer(int v)
{
p=new int(v);
}

Integer::Integer()
{
p=new int(0);
}

Integer::Integer(const Integer &obj)
{
p= new int(*obj.p);// by implementing deep copy avoiding copy of an object
// now code will run fine
//also to avoid modification call it be const keyword
}
int Integer::GetValue() const
{
return *p;
}

void Integer::SetValue(int v)
{
p= new int(v);
}

Integer:: ~Integer(){
std::cout<<"Destructor called\n";
delete p;
}
