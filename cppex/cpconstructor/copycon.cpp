#include<iostream>
using namespace std;
class Bulb
{
int w;


public:
Bulb()
{
w=0;
}
Bulb(int e)
{
w=e;
}
Bulb(const Bulb & v)
{
w=v.w;
}
Bulb & operator=(const Bulb& obj)
{
cout<<"Assingment operator called\n";
return *this;
}
int getWattage()
{
return w;
}
void setWattage(int e)
{
e=w;
}
};

int main()
{
Bulb g;
Bulb t(60);
Bulb m(t);
Bulb x=t;
cout<<"G: "<<g.getWattage()<<"\n";
cout<<"T: "<<t.getWattage()<<"\n";
cout<<"M: "<<m.getWattage()<<"\n";

return 0;

}
