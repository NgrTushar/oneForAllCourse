#include <iostream>
using namespace std;
void call(const int &i,const int &n)
{
if(i<1) return;
printf("x%d",i);
call(i-1,n);

printf("y%d",i);
}

void call1(const int &i,const int &n)
{
if(i>n) return;

call1(i+1,n);
printf("%d",i);
}

int main()
{
int n{0};
cin>>n;
//call(n,n);
cout<<endl;
call1(1,n);
return 0;
}
