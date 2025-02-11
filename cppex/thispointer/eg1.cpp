//line written in comments will be written by compiler
// here in function set wattage compiler wont write this-> on the left of the w because 
//there is no theory that compiler will write  this-> on the left but not on the right
// so in function setWattage(int w,Bulb *this) value is assigned to the local value (which// is in the parameter) 

#include<iostream>
using namespace std;
class Bulb
{
int w;
public:
void setWattage(int w) //setWattage(int w, Bulb *this)
{
w=w; 
}
int getWattage() //getWattage(&g)
{
return w; //return this->w;
}
};


int main()
{
Bulb g;
g.setWattage(70); //g.getWattage(70,&g);
cout<<g.getWattage();



return 0;
}
