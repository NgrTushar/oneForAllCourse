#include<iostream>
using namespace std;
class Bulb
{
int w;
public:
void setWattage(int w)
{
this->w=w;
cout<<this<<"\n";
//<<*this<<"\n";
cout<<"W: "<<w<<" "<<&w;
}
int getWattage()
{
return this->w;
}
};



int main()
{
Bulb b;
cout<<"Object b: "<<&b<<"\n";
b.setWattage(20);
cout<<"\n";
cout<<b.getWattage();
return 0;
}
