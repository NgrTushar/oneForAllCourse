#include <iostream>
using namespace std;
class Bulb
{
private:
int w{};

public:
Bulb()
{
cout<<"Default constructor called\n";
w=0;
}

Bulb(int w)
{
cout<<"Parameterised constructor\n";
this->w=w;
}

Bulb &operator =(const Bulb& other)
{
cout<<"Assignment operator called\n";
w=other.w;
return *this;
}

Bulb(const Bulb & other)
{
cout<<"Copy constructor called\n";
this->w=other.w;
}
};

int main()
{
Bulb g;
cout<<"111111111\n";
g=100;
// here first parameterised constructor is called to convert 100 into bulb type object 
// then after assignment operator is called to assign resources to object g.
// assignment operator is called to assign the temporary Bulb object created 
// from 100 to the object g
cout<<"222222222\n";
Bulb m=100;
// compiler optimizes this code into Bulb m(100) to avoid uneccessary object creation
// and parameterised constructor is called because it is not directly copy initialisation
cout<<"333333333\n";
Bulb k=m;// here copy constructor is called best suitable call
cout<<"44444444\n";
Bulb u;// default constructor invoked
cout<<"55555555\n";
u=k;// assignment operator invoked
cout<<"6666666\n";

return 0;
}
