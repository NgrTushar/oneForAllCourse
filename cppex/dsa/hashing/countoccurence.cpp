#include<iostream>
using namespace std;
int main()
{
cout<<"Enter Requirement: ";
int req;
cin>>req;
int arr[req];
for(int i=0;i<req;i++)
{
cin>>arr[i];
}
//precompute
int hash[13]={0};
for(int i=0;i<req;i++)
{
hash[arr[i]]+=1;
}


int n;
cin>>n;
while(n--)
{
int number;
cin>>number;
//fetch
cout<<hash[number]<<"\n";
}
return 0;
}
