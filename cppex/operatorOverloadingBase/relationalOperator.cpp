// In this example we will overload relational operator
// person who is going to use this class want if he writes g<t the comparision of the
// prices of both bulb should be done
// to achieve that we need to overload < operator because here we will be comparing 
// object of return type Bulb and predefined <(less than Binary operator is compares 
// binaries)
#include<stdio.h>
class Bulb;
class Tv
{
int price;
public:
friend class Bulb;
void setPrice(int price)
{
this->price=price;
}
int getPrice()
{
return this->price;
}
int operator<(Tv &v)
{
printf("Tv:: operator (Tv &v)\n");
return this->price<v.price;
}
int operator <(const Bulb &v);
/*int operator <(Bulb &v)
{
return this->price<v.price;
}*/
//friend class Bulb;
};

class Bulb
{
int price;
int w;
public:
void setWattage(int w)
{
this->w=w;
}
int getWattage()
{
return this->w;
}
void setPrice(int price)
{
this->price=price;
}
int getPrice()
{
return this->price;
}
int operator <(const Bulb &b)
{
printf("Bulb::operator Bulb &b\n");
return this->price<b.price;
}
int operator <(const Tv &t)
{
printf("Bulb::operator(Tv &t)\n");
return this->price<t.price;
}
friend class Tv;
};
int Tv::operator<(const Bulb &v)
{
printf("Tv::operator(Bulb &v)\n");
return this->price<v.price;
}
int main()
{
Bulb g,t;
Tv r,s;
r.setPrice(50);
s.setPrice(150);
g.setWattage(40);
g.setPrice(1000);
t.setWattage(45);
t.setPrice(113);
if(g<t)
{
printf("Price of g is less than the Price of t\n");
}else {
printf("Price of g is Greater than the Price of t\n");
}
if(t<s)
{
printf("Price of t is less than the Price of s\n");
}else{
printf("Price of t is Greater than the Price of s\n");
}
if(s<t)
{
printf("Price of s is less than that of t ");
}else
{
printf("Price of s is not less than that of t");
}
return 0;
}
