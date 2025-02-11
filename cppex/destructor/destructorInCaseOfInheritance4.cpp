//Virtual Destructor-  In case of inheritance, if a pointer is created from base class, also memory is alloacated through new and its address is assigned to the base class pointer , then the memory will be released through delete operator, then the derived class destructor wont get called unless base classs destructor is declared virtual.
// declaring base class destructor virtual solves that problem
// Role of Destructor ?? It is used to perform clean up activity
#include <iostream>
using namespace std;
class aaa
{
public:
aaa()
{
cout<<"Base class Default Constructor\n";
}

virtual ~aaa()
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
