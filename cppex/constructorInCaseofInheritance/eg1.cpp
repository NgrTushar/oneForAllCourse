#include <iostream>
using namespace std;
class aaa
{
public:
aaa()
{
cout<<"Base class constructor called\n";
}
aaa()
{
cout<<"Base class parameterized contructor called\n";
}

};

class bbb:public aaa
{
public:
bbb()//bbb():aaa() -- compiler wrote
{
cout<<"Derived class constructor called\n";
}
bbb(int r) //bbb(int r):aaa()-- compiler wrote
{
cout<<"Derived class parameterised constructor called\n";
}

};
int main()
{
bbb b;
//b.bbb() -- compiler
bbb a(12);
//a.bbb(12) -- compiler
return 0;
}
