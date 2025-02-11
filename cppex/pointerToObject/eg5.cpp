//this code wont compile because it is written to get the knowledge of how compiler behaves in certain aspects and rules.
#include <iostream>
using namespace std;
class aaa
{
public:
void sam()
{
cout<<"sam\n";
}

};


class bbb:public aaa
{
public:
void tom()
{
cout<<"tom\n";
}


};


int main()
{
aaa *p;
p=new aaa;
//p->tom();//this wont compile because pointer of class aa doesnt know tom
p->sam();
bbb *p1;
p1=new bbb;
p1->tom();
p1->sam();
aaa *p2;
p2=new bbb;
//p2->tom();//although aaa pointer can store the address of object class bbb it doesnt
//because at birth of pointer aaa only knows sam() not tom() of bbb

p2->sam();
bbb *p3;
//p3=new aaa;//cannot store the address of base class object
//p3->tom();
//p3->sam();
return 0;
}
