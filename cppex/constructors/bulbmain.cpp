#include "bulb.h"
#include <iostream>
int main()
{
Bulb g;
//which constructor gets executed will depend upon how object is created by the programmer
Bulb t;
Bulb h(9);
std::cout<<"wattage of object g is:  "<<g.getWattage()<<"\nWattage of object t is: "<<t.getWattage();
return 0;
}
