#include <iostream>
class Bulb
{
int w;
public:
Bulb()
{
w=0;
}
Bulb(int e)
{
if(e>=0 && e<=240)
{
w=e;
}
else{
w=0;
}
//by writing above code our object stays in valid state like:
//wattage cant be less than zero nor greater than 240;
//If object is exposed then it will in user of this class can also do this-
//g.setWattage(-1) || g(1000);
}
int getWattage()
{
return w;
}

void setWattage(int e)
{
if(e>=0 && e<=240)
{
w=e;
}
else{
w=0;
}
}
};


int main()
{
Bulb g(-32),t;

std::cout<<"wattage of object g: "<<g.getWattage()<<"\nWattage of object t: "<<t.getWattage()<<'\n';
return 0;
}
