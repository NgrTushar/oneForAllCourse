//base class pointer and derived class object
// creation of object there is no role of pointer
// the destructor of derived class does not get executed solution to this problem is in 
// next example
#include <iostream>
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
aaa* p;
cout<<"----------\n";
p=new bbb;
//bbb b;
cout<<"----------\n";
delete p;
cout<<"Cool\n";
return 0;
}
