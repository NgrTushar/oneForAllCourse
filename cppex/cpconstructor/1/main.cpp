#include "integer.h"
#include <iostream>
int main()
{
Integer i(7);
Integer i2(i);
std::cout<<i.GetValue()<<"\n";
return 0;
}
