//if derived class object is created then the order of execution of constructor is first
//base class constructor is called then derived class constructor is called 
// the order of execution of destructor is first derived class dstructor is called 
// then base class destrutor is called
#include<iostream>
using namespace std;
class aaa
{
public:
aaa()
{
cout<<"Base class Default Constructor\n";
}

~aaa()
{
cout<<"Base class Destructor\n";
}
};


class bbb:public aaa
{
public:
bbb()
{
cout<<"Derived class Default Constructor\n";
}

~bbb()
{
cout<<"Derived class Destructor\n";
}
};

int main()
{
aaa a;
cout<<"----------\n";
bbb b;
cout<<"----------\n";

return 0;
}
