//this code wont compile
// if i want this code to work fine then 
// I Have to Declare << function in class Monitor because we are using an object of class
// Monitor and whose parameter is type of int
//it will still not compile beause you cant use keywords and operators for naming function
//follow next example for more clarity eg1.cpp
#include<stdio.h>

class Monitor
{
void <<(int x)
{
printf("%d",x);
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

return 0;
}
