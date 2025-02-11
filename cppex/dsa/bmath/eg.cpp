#include <iostream>
using namespace std;
int main()
{
int x{1231};
int dup=x;
int ldigit{0};
int num{0};
int arm{0};
while(x>0)
{
ldigit=x%10;
arm=ldigit*ldigit*ldigit+arm;
num=num*10+ldigit;
cout<<ldigit<<" , "<<num<<"\n";
x=x/10;
}
if(x==dup)
{
cout<<"Palindrome\n";
}else
{
cout<<"not Palindrome\n";
}
if(arm==dup) cout<<"it is armstrong number";
else cout<<"it is not an armstrong number";
return 0;
}
