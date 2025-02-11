#include<iostream>
using namespace std;
class Bulb
{
int w;
int *getWattage()
{
return &w
}
void setWattage(int e)
{
if(e<=0 && e>=240)
{
w=e;
}
else w=0;
}
};
//you should not expose the address of  the object(or member varible in this example)
//which you have  encapsulated already.
int main()
{
Bulb g;
int *pint;
pint=g.getWattage();//encapsulated object can be also manipulated if somehow address made 
*p=-20;             //available
return 0;
}
