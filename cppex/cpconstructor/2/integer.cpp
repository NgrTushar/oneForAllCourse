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
