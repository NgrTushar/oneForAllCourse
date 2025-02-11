//constructor does not gets called until object is created here constructor is called on
// line aaa a; NOT on aaa *b; beacause pointer is created not an object
// just after that we created an object then constructor is called but destructor is not
// for an object which was allocated through new. just like in C language whenever memory 
// is allocated through malloc you need to free the memory through free() 
// here it will be delete operator;
#include<iostream>
using namespace std;
class aaa
{
public:
aaa()
{
cout<<"Default Constructor\n";
}
~aaa()
{
cout<<"Destructor called\n";
}
};

void sam()
{
aaa g,t,m;
cout<<"function called\n";
}

int main()
{
aaa a;
cout<<"random\n";
aaa *b;
cout<<"Cool\n";
b=new aaa;
cout<<"yes\n";
delete b; // whatever was created by *b will get destroyed here
cout<<"Ujjain\n";
return 0;
//but whatever was created by a will get gets destoryed here
}
