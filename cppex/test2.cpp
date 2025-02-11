#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int*  gg(int arr[],int size)
{
sort(arr,arr+size);
/*for(auto i : arr)
{
cout<<i<<" ";
}*/
return arr;
}

int main()
{
int arr[]={12,31,12,15,2,3,5};
int size=sizeof(arr)/sizeof(arr[0]);
for(auto i : arr)
{
cout<<i<<" ";
}

cout<<gg(arr,size);

return 0;
}
