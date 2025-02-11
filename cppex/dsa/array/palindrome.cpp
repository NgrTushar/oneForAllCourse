#include <iostream>
using namespace std;
int main()
{
int x,lastdigit{0},num{0},dup;
cout<<"Enter a number: ";
cin>>x;
dup=x;
while(x>0)
{

lastdigit=x%10;
num=num*10+lastdigit;
x=x/10;
}
if(num==dup) cout<<"Palindorme\n";
else cout<<"Not palindorme\n";
return 0;
}
