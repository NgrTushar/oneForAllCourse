#include<iostream>
using namespace std;
 
void Print(int &x)
{
cout<<"Print(int &x): Invoked\n";
}

void Print(const int &x)
{
cout<<"Print(const int &x): Involed\n";
}
/*void Print(int &&x)//This function also accepts r value reference
{
cout<<"Print(int &&x): Invoked\n ";
}
*/


int main()
{
int x=10;
Print(x);
//x is an l-value ; so this call will bind to the function which accepts l-value
//(continuation of upper sentence)reference
// if we invoke Print() function by r-value and 3 is temporary 
// So the function which accepts r-value refrence will get binded to the function which accepts constant reference

Print(3);

return 0;
}
