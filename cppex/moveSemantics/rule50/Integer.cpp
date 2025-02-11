#include <iostream>
#include"Integer.h"
Integer::Integer()
{
cout<<"Integer()\n";
p=new int(0);
}

Integer::Integer(int value)
{
cout<<"Integer(int)\n";
p=new int(value);
}

Integer::Integer(const Integer &other)
{
cout<<"Integer(const Integer &other)\n";
if(&other==this)
{
return *this;
}
p=new int(*other.p);
return *this;
}

Integer::Integer(const Integer &&other)
{
cout<<"const Integer(Integer &&other)\n";
p=other.p;
other.p=nullptr;
}

Integer::~Integer()
{
delete p;
}

int Integer::GetValue()
{
return *p;
}

Integer& Integer:: operator=(Integer &&other)
{
cout<<"Integer operator=(Integer&& other)\n";
if()
}

Integer& Integer:: operator=(const Integer & other)
{

}

void Integer::SetValue(int value)
{
p=new int(value);
}

