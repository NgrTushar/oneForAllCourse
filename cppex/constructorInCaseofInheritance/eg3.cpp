//write default constructor in the class bbb and specify the that call parameterized constructor of class aaa whenever object of derived class gets created call parameterized constructor of class bbb

#include <iostream>
using namespace std;

class aaa{
public:
aaa(int e)
{
cout<<"Base class Constructor is called\n";
}
};


class bbb: public aaa
{
public:
bbb():aaa(10)
{
cout<<"Derived class base constructor called\n";
}
};


int main()
{
bbb b;
return 0;
}

