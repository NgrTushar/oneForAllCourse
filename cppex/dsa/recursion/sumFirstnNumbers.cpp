#include <iostream>
using namespace std;
void print(int i,int sum)
{
if(i<1) 
{
cout<<"\n"<<sum;
return;
}
print(i-1,sum+i);
}


int main()
{
int n{0};
cout<<"Enter number for sum upto: ";
cin>>n;
print(n,0);

return 0;
}
