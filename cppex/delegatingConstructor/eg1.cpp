// Applying delegating constructor to avoid writing same code again and again
// you can refer after executing this code to know the flow of execution of constructors
#include <iostream>

class Bulb
{
int wattage;
int price;

public:
Bulb():Bulb(0){
std::cout<<"Bulb() called\n";
}
Bulb(int price):Bulb(price,0)
{
std::cout<<"Bulb(int price) called \n";
}
Bulb(int price,int wattage)
{
std::cout<<"Bulb(int price,int wattage) called\n";
this->price=price;
this->wattage=wattage;
}
void printContents()
{
std::cout<<"Wattage of Bulb is: "<<this->wattage<<"\nPrice of Bulb is: "<<this->price<<"\n";
}
};
int main()
{
Bulb b1;
Bulb b2(20);
Bulb b3(25,20);
b1.printContents();
b2.printContents();
b3.printContents();
return 0;
}
