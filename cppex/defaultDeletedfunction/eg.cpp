// if we write parameterised constructor then compiler wont write default constructor
//
#include <iostream>
using namespace std;

class Integer
{
int value{0};
public:
/*Integer()
{
value=0;
}*/

Integer()=default;// by writing we are requesting to implement default compiler
Integer(int i)
{
value=i;
}
int getValue()
{
return value;
}
};


int main()
{
Integer i;
Integer i2(7);
cout<<i.getValue()<<"\n"<<i2.getValue();

return 0;
}
