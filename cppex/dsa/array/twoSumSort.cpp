#include <iostream>
#include <algorithm>

using namespace std;



int main()
{
int arr[]={10,8,2,7,9,0};
int n=sizeof(arr)/sizeof(arr[0]);
int end=n-1;
int start=0;
int target=17;
for(auto &x:arr)
{
cout<<x<<" ";
}
printf("\n");
sort(arr,arr+n);
for(int i{0};i<n;i++)
{
cout<<arr[i]<<" ";
}
printf("\n");


while(start<end)
{
if(arr[start]+arr[end]<target)
{
start++;
}else if(arr[start]+arr[end]>target)
{
end--;
}else {
cout<<arr[start]<<" "<<arr[end]<<'\n';
break;
}
}
return 0;
}
