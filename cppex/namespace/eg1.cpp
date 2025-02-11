//using :: scope resolution operator
#include<iostream>
namespace sales
{
int numberOfTransaction=89;
int getTransactionDetails()
{
return 1000;
}
}
namespace purchase
{
int numberOfTransaction=67;
int getTransactionDetails()
{
return 4000;
}
}

int main()
{
int amount=sales::getTransactionDetails();
std::cout<<"Amount: "<<amount;
amount=purchase::getTransactionDetails();
std::cout<<"\nAmount: "<<amount;
return 0;
}
