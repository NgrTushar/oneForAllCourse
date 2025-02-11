#include <iostream>
class Bulb
{
private:
int wattage;

public:
Bulb()
{
std::cout<<"Bulb()\n";
this->wattage=0;
}
Bulb(int wattage)
{
std::cout<<"Bulb(int)\n";
this->wattage=wattage;
}
Bulb(const Bulb &other)
{
std::cout<<"Bulb(Bulb&)\n";
this->wattage=other.wattage;
}
Bulb(Bulb &&obj)
{
std::cout<<"Bulb(Bulb &&)\n";
this->wattage=obj.wattage;
obj.wattage=0;
}
};



int main()
{
Bulb a=3;

return 0;
}
