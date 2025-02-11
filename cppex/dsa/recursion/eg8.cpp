#include <iostream>
using namespace std;
void fact(int i,int result)
{
if(i<1) 
{
cout<<result;
return;
}
fact(i-1,result*i);
}


int main()
{
int n;
cout<<"Enter number to get factorial of: ";
cin>>n;
int result{1};
fact(n,result);
return 0;
}
