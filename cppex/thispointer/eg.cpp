// here compiler will write something.
// compiler written code is written in front of the line of code
// For every non static method of a class, a (this) pointer is provided by the compiler. (this) pointer stores the address of the object for which is the method has been called.


#include<iostream>
using namespace std;
class Bulb
{
int w;
public:
void setWattage(int e) //void setWattage(int e,Bulb *this)
{
w=e;//this->w=e;
}
int getWattage() //int getWattage(Bulb *this)
{
return w; // return this->w;
}

};

int main()
{
Bulb b;
b.setWattage(10); //b.setWattage(10,&b);
cout<<b.getWattage()<<"\n"; // b.getWattage(&b)

return 0;
}
//we cannot declare named as (this)
