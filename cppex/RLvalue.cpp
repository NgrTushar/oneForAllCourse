#include<iostream>
using namespace std;
// returns r-value; Value it returns is temporary
int Add(int x ,int y)
{
return (x+y);
}
// returns l-value;
//this function returns by reference;
// Any functions by refrence returns r-value 
// This shows transform function can be written in the left hand side of assign operator and can be assigned some value to it;
// Value will be assigned to thereturn type of assignment operator
// But Add function cannot come at the left side of the operator
int & Transform(int &x)
{
x*=x;
return x;
}


int main()
{
// x,y & z are lvalues ; 10, 5 and 9 are rvalues
int x=5;
int y=10;
int z=9;
//Expression returns r-value
int result = (x+y)*z;
//Expression returns l-value 
++x=6;


return 0;
}
