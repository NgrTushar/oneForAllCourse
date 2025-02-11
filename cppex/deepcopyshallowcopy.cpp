#include<iostream>
using namespace std;
int main()
{
int *p=new int(5);
int *p1=p; // shallow copy
int *p2=new int(*p);

*p=6;
cout<<p<<" "<<*p<<"\n";
cout<<p1<<" "<<*p1<<"\n";
cout<<p2<<" "<<*p2<<"*********\n";

*p1=10;
cout<<p<<" "<<*p<<"\n";
cout<<p1<<" "<<*p1<<"\n";
cout<<p2<<" "<<*p2<<"*********\n";

*p2=8;

cout<<p<<" "<<*p<<"\n";
cout<<p1<<" "<<*p1<<"\n";
cout<<p2<<" "<<*p2<<"********\n";




return 0;
}
