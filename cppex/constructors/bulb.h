#pragma once
class Bulb
{
int wattage{0};
public:
Bulb();
//default constructor this will get executed when no argument is passed during creation
// of an object of class Bulb
Bulb(int w);
//parameterised contructor this will get executed when something is passed as an argument
// when an  object is created of class bulb
//Bulb(const Bulb& b);
void setWattage(int w);
int getWattage();
};
