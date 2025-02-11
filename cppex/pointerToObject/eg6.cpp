#include <iostream>
using namespace std;
class aaa
{
public:
void sam()
{
cout<<"sam\n";
}

virtual void tom()
{
cout<<"tom\n";
}
};

class bbb:public aaa
{
public:
void tom()
{
cout<<"Derived tom";
}
};


int main()
{
aaa *a;
a=new bbb;
a->sam();
a->tom();
//although aaa pointer has derived class object it executes base class tom method first
// if you want derived class tom to get executed then you need to declare base tom virtual


return 0;
}
