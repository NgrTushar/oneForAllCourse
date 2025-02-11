//if you are creating an alias of the variable  and you want that variable should not be 
//modified then you may declare it const.

#include<iostream>
using namespace std;
void print(int &x)
{
x=2; 
cout<<"x : "<<x<<endl;
}

int main()
{
int x=1;
print(x);
//print(1);
return 0;
}
