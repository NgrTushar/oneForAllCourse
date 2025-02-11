//By creating a class which can inherit all the classes having is relatioship with all the derived classes
//Although base class pointer can store Derived class object still the line (c->manual()) will not compile
//because pointer created does not know the public members of derived classes
// Solution refer to next example eg3.cpp

#include <iostream>
using namespace std;
class Car
{
};
class Maruti800:public Car
{
//1000's of properties
public:
void manual()
{
cout<<"Operational details of class Maruti800\n";
}

};
class HondaCity:public Car
{
//1000's of properties
public:
void manual()
{
cout<<"Operational details of class HondaCity\n";
}
};


int main()
{
int ch;
Car *c;
cout<<"1. Maruti800\n";
cout<<"2.HondaCity\n";
cout<<"Enter Choice:";
cin>>ch;

if(ch>=1 && ch<=2)
{
if(ch==1)
{
c=new Maruti800;
}else if(ch==2)
{
c=new HondaCity;
}
c->manual();
}else{
cout<<"Invalid Choicei\n";
}


return 0;
}
