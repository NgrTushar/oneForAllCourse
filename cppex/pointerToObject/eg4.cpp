#include <iostream>
using namespace std;
class aaa
{



};

class bbb:public aaa
{

};

int main()
{
aaa *a;
a=new bbb;
bbb *b=new aaa;// this wont compile
// aaa is base bbb is derived, aaa is superior, bbb subordinate 
//In case of Inheritance base class pointer is capable of storing address of an object
//created from its derived class, but 
// vice versa is not possible 
// A pointer created from derived class is not capable of storing address of an object created from its base class
return 0;
}
