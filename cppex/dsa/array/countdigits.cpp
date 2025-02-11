#include <iostream>
using namespace std;
int main()
{
int x;
cout<<"Enter a Number: ";
cin>>x;
int cnt{0};
while(x>0)
{
x=x/10;
cnt++;
}
cout<<"Number of Digits: "<<cnt<<"\n";
return 0;
}
