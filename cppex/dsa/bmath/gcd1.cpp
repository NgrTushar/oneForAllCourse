#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
int n,n2;
cout<<"Enter two number to find gcd of:\n"<<"1. ";
cin>>n;
cout<<"2. ";
cin>>n2;
int gcd=1;
for(int i=min(n,n2);i>=1;i--)
{
if(n%i==0 && n2%i==0)
{
gcd=i;
break;
}
}
cout<<"Gcd of numbers "<<n<<"and "<<n2<<" is: "<<gcd<<"\n";
return 0;
}
