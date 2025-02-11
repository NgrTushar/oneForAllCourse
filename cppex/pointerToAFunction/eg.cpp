#include <iostream>
using namespace std;
int sqr(int x)
{
return x*x;
}
void sum(int x,int y)
{
cout<<x+y<<"\n";
}

int main()
{
void (*p)(int,int); 
// pointer to a function which can store adress of a function whose return type is void and contains two parameter of type (int ,int)
int (*p1)(int);
// pointer to a function which can store address of a function whose return type is int and constains one parameter of type (int)
p=sum; // address of a function sum is assigned to pointer to a function p
p1=sqr;// address of a function sqr is assigned to pointer to a function sqr
p(10,29);
// run whatever function address p holds
cout<<"\nsquare: "<<p1(5);

return 0;
}
