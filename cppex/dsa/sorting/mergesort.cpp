//merge sort 1.divide and conquer algorithm 2.stable algorithm(it maintains the original 
// order) 3.well suited for linked list works in O(1) Aux space 
// works in O(1) Aux space 3. used in external sorting  4.It works in theta(nlogn time)
// which is the best possible time you can get on a single processor for random input
// but it takes O(n) extra space 5.In general for arrays, Quick sort outperforms Merge
// sort java 8 uses merge sort quick sort merge sort according to input python uses
// variation of merge sort called tim sort which is merge sort plus insertion sort vairat
//on
//TWO SORTED ARRAYS
#include <bits/stdc++.h>
using namespace std;
void MergeSort(int arr1[],int arr2[],int m,int n)
{
int f[m+n];
int i=0;
int j=0;
while(i<m && j<n)
{
if(arr1[i]>arr2[j])
{ 
printf("%d ",arr2[j]);
j++;
}
else{
printf("%d ",arr1[i]);
i++;
}
}

while(i<m)
{
printf("%d ",arr1[i]);
}
while(i<n)
{
printf("%d ",arr2[j]);
}
}

int main()
{
int arr1[]={11,23,27};
int arr2[]={5,14,34};
int m=sizeof(arr1)/sizeof(arr1[0]);
int n=sizeof(arr2)/sizeof(arr2[0]);
MergeSort(arr1,arr2,m,n);
return 0;
}
