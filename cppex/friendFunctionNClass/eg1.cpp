//Now i want to write t.price and and f.price in getTotalPrice function which will lead
// to compilation error because property 'price' is private 
// see follow up example eg2.cpp
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
};
int getTotalPrice(Fridge &f,Tv &t)
{
int Total=f.price+t.price;
return Total;
}

int main()
{
Fridge f;
f.setPrice(10000);
Tv t;
t.setPrice(9000);
int total=getTotalPrice(f,t);
cout<<"Total prices of your Products: "<<total;;
return 0;
}
