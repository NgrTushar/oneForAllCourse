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
bbb* b;
cout<<"----------\n";
b=new bbb;
//bbb b;
cout<<"----------\n";
delete b;
cout<<"Cool\n";
return 0;
}
