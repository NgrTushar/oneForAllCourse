// declare that global function as friend of both classes/then it will be able to access
// private members of that class
// still code wont compile because in class Fridge while declaring that function friend 
// of that class Fridge class doesnt know Tv class because compiler checks line by line 
// from the top
// See follow up in next example eg4.cpp
// if i declare other class before Fridge it will get compiled
#include<iostream>
using namespace std;
class Tv;
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
friend int getTotalPrice(Fridge& ,Tv& );
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
friend int getTotalPrice(Fridge &,Tv &);
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
