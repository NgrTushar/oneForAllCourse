#include<iostream>
#include"Integer.h"

using namespace std;

class Integer
{
int m_value{0};
//you can initialise value like this too; now you dont need default constructor
public:
Integer() = default;//just like this you can declare default constructor

// as value has been initialised we dont need default constructor
//Integer()
//{
//m_value=0;
//}

//But we have already introduced paramaterised constructor it will give compilation error as compiler wont write default constructor and we have also removed it because initialised the value in the class itself

Integer(int value)
{
m_value=value;
}
// just like earlier declaration of default constructor  you can also ask compiler to define copy constructor;
//Integer(const Integer & )=default;// this wont make any difference since compiler will synthesize it automatically
Integer(const Integer &)=delete;
// this will lead to compilation error due to copy of an object is written in main function;
// it can also be used when you dont need compiler to define copy constructor
};

int main()
{
Integer i1;
Integer i2(3);
Integer i2(i1);
return 0;
}
