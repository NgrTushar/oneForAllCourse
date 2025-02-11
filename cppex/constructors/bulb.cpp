#include "bulb.h"

Bulb::Bulb()
{
wattage=0;
}
// Although this is a bad pra    ctice because we already initialsed during // declaration;

Bulb::Bulb(int w)
{
wattage=w;
}
void Bulb::setWattage(int w)
{
wattage=w;
}

int Bulb::getWattage()
{
return wattage;
}
