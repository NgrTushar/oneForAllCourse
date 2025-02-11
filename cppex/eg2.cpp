#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;


int sumBetweenTwoKth(int arr[], int n, int k2, int k2)
{
    // Sort the given array
   
sort(arr, arr + n);
 
    /* Below code is equivalent to
     int result = 0;
     for (int i=k1; i<k2-1; i++)
      result += arr[i]; */
cout<<*(arr+k1)<<*(arr+k2-1)<<endl;
return accumulate(arr + k1, arr + k2 - 1, 0);
}


int main()
{
int arr[]={20,8,22,4, 12, 10, 14};
int k1=3,k2=6;
int n=sizeof(arr)/sizeof(arr[0]);
cout<<sumBetweenTwoKth(arr,n,k1,k2);
return 0;
}
