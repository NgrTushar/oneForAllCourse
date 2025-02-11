#include "Integer.h"
#include <iostream>
class Number
{
Integer m_value{}; // Member variable of class Number of type Integer 
public:
Number(int value):m_value{value}{
std::cout<<"Number(int value) constructor got called\n";
}
};
Number createNumber(int num)
{
Number n{num};
return n;
}

int main()
{
Number a1{1};
auto a2{a1};
a1=a2;
auto n3{createNumber(7)};
n3=createNumber(4);
return 0;
}
