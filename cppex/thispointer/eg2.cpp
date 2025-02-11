//if i write sam->w=w in function setWattage(int w) code will not compile this means this 
// is a pointer but you cannot declare it. this is also not keyword because compiler is 
// declaring this as a pointer 
#include<iostream>
using namespace std;
class Bulb 
{
int w;
public:
void setWattage(int w) // void setWattage(int w,Bulb *this)
{
sam->w=w;
//this->w=w;
}
int getWattage()
{
return w; //return this->w;
}
};

int main()
{
Bulb g;
g.setWattage(50); //g.getWattage(50,&g)
cout<<g.getWattage();//g.getWattage(&g);
return 0;
}
