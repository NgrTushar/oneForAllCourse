// here if -O0 -fno-elide-constructors flag is used while compiling then you can see
// copy constructor call or move constructor call if that exest in your code

#include<iostream>
#include"Integer.h"
Integer add(const Integer &a,const Integer &b)
{
Integer temp;
temp.SetValue(a.GetValue()+b.GetValue());
return temp;
}

std::ostream & operator<<(std::ostream& o,const Integer &a)
{
std::cout<<a.GetValue()<<"\n";
return o;
}

int main()
{
Integer a(1), b(2);
//auto x=add(a,b);
a.SetValue(add(a,b).GetValue());

//std::cout<<"-- "<<add(a,b);
return 0;
}
