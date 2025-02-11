#include <iostream>
#include "Integer.h"
void print(Integer val)
{
std::cout<<val.GetValue()<<'\n';
}
int main()
{
Integer a(1);
//auto b{std::move(a)};
print(std::move(a));
std::cout<<a.GetValue()<<"\n";
return 0;
}
