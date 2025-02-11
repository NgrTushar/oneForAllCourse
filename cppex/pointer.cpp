#include<iostream>
int main()
{
using namespace std;
int x=10;
cout<<&x<<"\n";
//[*(derefrencing operator)] It is used to access the value at the address in the pointer
//int *p=&x; 
int *p=&x;
*p=5;
int *p1;

int y=*p1;
// in some cases you mayneed to point ot different                                 types so you can also create void pointer;
cout<<p<<"\n"<<*p1<<"\n"<<x;
int *ptr=nullptr; //always initialize pointer to make a good practice
*ptr=10;
return 0;
}
