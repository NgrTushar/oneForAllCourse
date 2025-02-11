#include<iostream>
using namespace std;
void Print(int &x)
{
cout<<"Print(&x) Called\n";
}
void Print(const int &x)
{
cout<<"Print(const int &x)\n";
}
void Print(int &&x)
{
cout<<"Print(int &&x) Called\n";
}
int main()
{
int x=10;
Print(x);
Print(3);

return 0;
}
