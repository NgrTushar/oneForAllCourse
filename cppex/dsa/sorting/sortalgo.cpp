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

void selectionSort(int arr[],int n)
{
for(int i=0;i<n-1;i++)
{
int mini=i;
for(int j=i+1;j<=n-1;j++)
{
if(arr[mini]>arr[j]) mini=j;
//if i write arr[i]>arr[j] and mini=j then if first element is greater then 2nd and if 
// i it get another element which is smaller than ith element.
// try running code with that change or do it on pen and paper with input 5 1 3 6 
}
swap(arr[mini],arr[i]);
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
//BubbleSort(arr,req);
selectionSort(arr,req);
cout<<"Sorted array: ";
for(int i=0;i<req;i++)
{
cout<<arr[i];
}
return 0;
}
