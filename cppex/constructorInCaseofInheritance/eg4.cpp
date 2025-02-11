// Here compiler will write copy constructor in both classes

#include <iostream>
using namespace std;

class aaa
{
public:
aaa()
{
cout<<"Base class constructor called\n";
}
aaa(const aaa &k)
{
cout<<"Base class copy contructor\n";
}
};


class bbb:public aaa
{
public:
bbb()
{
cout<<"Derived class default constructor called\n";
}

/*bbb(const bbb &k)
{
cout<<"Derived class copy Constructor is called\n";
}*/
};


int main()
{
bbb c;
bbb a(c);
//when you dont write copy construtor in derived it will implicitly call base copy constructor 
//if you uncomment copy constructor in class bbb and Now compiler will write :aaa() in front of derived class copy contructor and then compiler will implicitly call default constructor of class aaa

return 0;
}
