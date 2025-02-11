// in c++ there is a keyword called operator you can use it to declare operators as
// functions
// now i want to print some more types char ,float ,double etc.
// using feature like polymorphism to write functions that accepts different inputs
// now it will print in one line we need something which changes lines 
// follow next examaple eg2.cpp
#include<stdio.h>

class Monitor
{
public:
void operator <<(int x)
{
printf("%d",x);
}
void operator <<(float x)
{
printf("%f",x);
}
void operator <<(const char* x)
{
printf("%s",x);
}
void operator <<(double x)
{
printf("%lf",x);
}
};
namespace thinkingmachines
{
Monitor monitor;
}
using namespace thinkingmachines;

int main()
{
monitor<<10;
monitor<<"Nice";
monitor<<2.3f;
monitor<<2.33;
monitor<<'A';
return 0;
}
