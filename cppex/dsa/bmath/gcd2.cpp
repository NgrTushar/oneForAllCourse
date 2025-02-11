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
while(n>0 && n2>0)
{
if(n>n2) n=n%n2;
else n2=n2%n;
}
if(n==0) cout<<n2;
else cout<<n; 
return 0;
}
