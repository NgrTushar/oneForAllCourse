#include<iostream>
using namespace std;
class Fridge
{
int price;

public:
void setPrice(int price)
{
this->price=price;
}
int getPrice()
{
return this->price;
}
friend class Calculator;
};
class Tv
{
int price;
public:
void setPrice(int price)
{
this->price=price;
}
int getPrice()
{
return this->price;
}
friend class Calculator;
};

class Calculator
{
public:
int getTotalPrice(Fridge &f,Tv &t)
{
int Total=f.price+t.price;
return Total;
}
int getDifference(Fridge &f,Tv &t)
{
int Diff=f.price-t.price;
return Diff;
}
};
int main()
{
Fridge f;
Tv t;
f.setPrice(15000);
t.setPrice(10000);
Calculator c;
int Total=c.getTotalPrice(f,t);
int diff=c.getDifference(f,t);
cout<<"Total : "<<Total<<"\nDifference: "<<diff;
return 0;
}
