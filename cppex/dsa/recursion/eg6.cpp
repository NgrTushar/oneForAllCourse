#include <iostream>
using namespace std;
int printSum(int n,int sum)
{
for(int i{1};i<=n;i++)
{
sum=i+sum;
}
return sum;
}


int main()
{
int n{0};
int sum{0};
cin>>n;
sum=printSum(n,sum);
cout<<"\nSum of n natural numbers: "<<sum;
return 0;
}
