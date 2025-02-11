#include<iostream>
// In project level there will be multiple programmers on the team
// what if multiple programmer wrote same function then there will be an issue 
// so we can classify differently
// this code wont get compiled 
// you need to specify which getTransactionDetails function you want to get executed 
// sales or purchase to do that you need to use scope resolution operator
// Follow up example eg1.cpp
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
int amount=getTransactionDetails();
std::cout<<"Amount: "<<amount;
return 0;
}
