#include <iostream>
using namespace std;
class aaa
{
public:
aaa()
{
cout<<"->Base class constructor called"<<'\n';
}


};
class bbb: public aaa
{
public:
bbb()
{
cout<<"->class bbb constructor called"<<'\n';
}

};


int main()
{
bbb b;
// while creating an object of derived class bbb and inheriting class aaa first base class constructor is called;



return 0;
}
