//by taking pointer to a class can solve previous problem of memory wastage 
//still there arises new problem that do we have to take pointer to all classes??
//refer to next example

#include <iostream>
using namespace std;
class Maruti800
{
//1000's of properties
public:
void manual()
{
cout<<"Operational details of class Maruti800\n";
}

};
class HondaCity
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
Maruti800 *m;
HondaCity *h;
cout<<"1. Maruti800\n";
cout<<"2.HondaCity\n";
cout<<"Enter Choice:";
cin>>ch;
if(ch==1)
{
m=new Maruti800;
m->manual();
}else if(ch==2)
{
h=new HondaCity;
h->manual();
}else {
cout<<"Invalid Choice";
}


return 0;
}
