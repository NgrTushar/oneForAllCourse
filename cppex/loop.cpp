#include<iostream>
int main()
{
using namespace std;
int arr[]={1,2,3,4,5,6};
for(auto x=0;x<5;x++)
{
cout<<"Elements"<<arr[x]<<" ";
}
cout<<endl;
for(int x: arr){
cout<<x<<" ";
}
for(auto x: arr){ //in each iteration copy of the element will be created in x  
                   //to avoid making the copy of each element you can create
		   //refrence to the array
cout<<x<<" ";
}
for(auto &x: arr) // when you declare it as a refrence you also modify the value
{
x=3;  //this will change all the values of the element to 3;
cout<<x<<" ";
}
for(const auto &x: arr) // if you dont want to change the value then you can de
{
x=3;                   // clare it as a const;
cout<<x<<" ";
}

for(auto x : {1,2,3,4,5})
{
cout<<"Iterating over a list: "<<x<<" ";
}
return 0;
}
