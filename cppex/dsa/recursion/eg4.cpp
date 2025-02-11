#include <iostream>
using namespace std;
void call(const int &i,const int &n)
{
if(i>0)
{
call(i-1,n);
cout<<i;
}
else return;
}


int main()
{
int n{0};
printf("Enter a number: ");
cin>>n;
call(n,n);
return 0;
}
