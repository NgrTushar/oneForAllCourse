#include <iostream>
using namespace std;
int main()
{
int num{0},lastdigit{0},x;
cout<<"Enter a Number: ";
cin>>x;
//num{0};
//lastdigit{0};
while(x>0)
{
lastdigit=x%10;
num=num*10+lastdigit;
x=x/10;
}
cout<<"Reversed Number: "<<num;
return 0;
}
