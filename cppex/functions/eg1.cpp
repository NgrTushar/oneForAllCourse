#include<iostream>
#include"math.h"
void Print(char);
int main()
{
int a,b;
std::cout<<"Enter a number : ";
std::cin>>a;
std::cout<<"Enter another number : ";
std::cin>>b;

std::cout<<Add(a,b)<<std::endl;
Print('%');

return 0;
}
void Print(char ch)
{
for(int i=0;i<10;i++)
{
std::cout<<ch<<" ";
}

}
