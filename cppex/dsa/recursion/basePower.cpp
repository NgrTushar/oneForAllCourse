#include <iostream>

using namespace std;
int power(int n,int p)
{
if(p==1) return n;
if(p==0) return 1;
return n*power(n,p-1);
}



int main()
{
int n;
cout<<"Number: ";
cin>>n;
int p;
cout<<"Power: ";
cin>>p;
int res=power(n,p);
cout<<res;

return 0;
}
