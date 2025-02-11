#include <iostream>
using namespace std;
int fact(int n)
{
if(n==1) return 1;
return n*fact(n-1);
}

int main()
{
int n{0};
cin>>n;
n=fact(n);
printf("%d",n);
return 0;
}
