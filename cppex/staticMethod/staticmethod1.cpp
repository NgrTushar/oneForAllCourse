#include<iostream>
using namespace std;
class aaa
{
public:
void sam()
{
cout<<"sam()\n";
tom();
//non-static methods of class can access any member of class whether it is static or 
//non-static
}
static void tom()
{
cout<<"tom()\n";
//sam();
//but static methods of class can access only static members of class
jerry();


}
static void jerry()
{
cout<<"jerry()\n";
aaa a;
}
static void stuart()
{
aaa a; 
a.sam();
cout<<"stuart()\n";
// thats how you can access non static members from static method
}

};

int main()
{
aaa a;
a.sam();
aaa::stuart();
return 0;
}
