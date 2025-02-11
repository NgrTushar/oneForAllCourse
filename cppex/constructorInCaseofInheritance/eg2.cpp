//this program wont get compiled because we have wrote only parameterized constructor so compiler wont write default constructor and while creating an object of derived class bbb compiler will write default and copy constructor in class bbb and write :aaa() next to default constructor, as default constructor is not present in the base class aaa it will not get compiled
//check out eg3.cpp to know the trick to compile this code

#include <iostream>
using namespace std;
class aaa{
aaa(int e)
{
cout<<"Base class parameterized constructor called\n";
}

};

class bbb:public aaa 
{



};



int main()
{
bbb b;


return 0;
}
