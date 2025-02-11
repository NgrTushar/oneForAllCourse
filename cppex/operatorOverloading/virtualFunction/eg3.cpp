//by introducing method, but not just introducing declaring it virtual in base class which is in derived class that you want, to get executed. 
//this will determine that which method to be executed at runtime on basis of type of     object pointer holds not by the type of pointer.
#include <iostream>
using namespace std;
class Car
{
virtual void manual()
{

}
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
