#include <iostream>
using namespace std;
int checkarmstrong(int N)
{
if(N>0)
{
return N%10*N%10*N%10 + (checkarmstrong(N/10));
}else
{
return 0;
}
}


int main()
{
int num;
cout<<"Enter a Number: ";
cin>>num;
int arm=checkarmstrong(num);
if(num==arm)
{
cout<<"Yes";
}else{
cout<<"No";
}
return 0;
}
