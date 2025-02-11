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
int &&r1=10;
int &&r2=Add(1,3);
int x=6;
Transform(x)=x;
cout<<x<<"\n"<<Transform(x)<<"\n";
int &y=Transform(x);
//int &&r3=x; // this cant be done as rvalue refrence takes r-value only;
//in this line x is a lvalue

// Purpose of r-value refrence is it helps to detect temporaries in expression
return 0;
}
