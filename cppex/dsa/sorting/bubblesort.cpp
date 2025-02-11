#include <bits/stdc++.h>
using namespace std;
void BubbleSort(int arr[],int n)
{

for(int i=0;i<=n-1;i++)
{
int swapped =0;
for(int j=0;j<=n-i-1;j++)
{
if(arr[j]>arr[j+1]) 
{
swap(arr[j],arr[j+1]);
swapped=1;
}
}
if(swapped==0) break;
}
}



int main()
{
int req;
cout<<"Enter requirement: ";
cin>>req;
int arr[req];
for(int i=0;i<req;i++)
{
cin>>arr[i];
}
BubbleSort(arr,req);
cout<<"Sorted array: ";
for(int i=0;i<req;i++)
{
cout<<arr[i];
}
return 0;
}
