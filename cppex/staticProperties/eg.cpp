//this code wont compile
//when an object is created of a class, it does not allocate memory for static properties
//Memory is allocated only for non static properties not for static properties
// why this code is not getting compiled? because we are trying to put a value in a 
//variable which is not known by the class bulb
//--------------------------
// what is static property- it is a property whose one copy is shared by all objects
//--------------------------------------------------------------------
// example- if there is a game and there are multiple bullets and you need one common box
//so there you can use pointer which is static property and it will be shared by all
//bullets
// if i want to build connection through database and doesnt matter how many instances 
//gets created i just want that connection to get establish only once so i will declare 
// static so that connection is established only once doesnt matter how many instances 
//gets created
#include <iostream>
using namespace std;
class Bulb
{
private:
int w; //wattage
static int p;//price
public:
void setWattage(int r)
{
w=r;
}
void setPrice(int r)
{
p=r;
}
int getWattage()
{
return w;
}
int getPrice()
{
return p;
}

};
// you have declare static properties globally then memory for p will get allocated and 
//eventually code will get compiled
// And default value will be zero not garbage
int Bulb::p;

int main()
{
Bulb b;
b.setWattage(10);
b.setPrice(10);
cout<<" Price of this wattage '"<<b.getWattage()<<"' is : "<<b.getPrice()<<"\n";
Bulb i;
i.setWattage(20);
i.setPrice(15);
cout<<"Price of this wattage '"<<i.getWattage()<<"' is: "<<i.getPrice()<<"\n";
cout<<" Price of this wattage '"<<b.getWattage()<<"' is : "<<b.getPrice()<<"\n";

return 0;
}
