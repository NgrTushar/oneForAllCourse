#include <iostream>
using namespace std;
int print(int i)
{
if(i==0) return 0;
return i+print(i-1);
}




int main()
{
int i{0};
cin>>i;
int sum=print(i);
cout<<"Sum of n numbers: "<<sum;
return 0;
}
