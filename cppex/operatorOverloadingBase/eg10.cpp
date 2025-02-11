#include <iostream>
using namespace std;
class Bulb
{
private:
int w;
public:
Bulb()
{
cout<<"Default Constructor\n";
}

Bulb(int w)
{
cout<<"Parameterized constructor\n";
this->w=w;
}

Bulb(const Bulb& other)
{
cout<<"Copy Constructor\n";
this->w=other.w;
}

Bulb & operator=(const Bulb &other)
{
this->w=other.w;
cout<<"Assignment operator\n";
return *this;
}

void SetWattage(int w)
{
this->w=w;
}

int GetWattage()
{
return this->w;
}
};
class aaa
{
public:
aaa()
{

}
aaa(int c)
{

}
};
void dosomething(aaa a)
{
cout<<"555555\n"
}
void dosomething(Bulb t)
{
cout<<"333333\n";
cout<<"Wattage is : "<<t.GetWattage()<<"\n";
}

int main()
{
Bulb m;
cout<<"1111111\n";
m.SetWattage(100);
cout<<"222222\n";
dosomething(m); // here copy constructor is invoked, copying of object m to object t
// in parmeter of dosomething function
cout<<"444444\n";

return 0;
}
