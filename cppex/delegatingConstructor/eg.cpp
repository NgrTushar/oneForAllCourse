// this is the base example now we are going to implement delegating constructor feature
// of C++ 11 in follow up example to avoid same initialization code again and again
#include <iostream>

class Bulb
{
int wattage;
int price;

public:
Bulb(){
wattage=0;
price=0;
}
Bulb(int price)
{
wattage=0;
this->price=price;
}
Bulb(int price,int wattage)
{
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
