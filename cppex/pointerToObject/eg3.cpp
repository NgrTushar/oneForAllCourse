#include <iostream>
using namespace std;

class bbb{


};

class aaa
{


};


int main()
{
aaa *a;
a=new bbb;
bbb *b;
*b=new aaa;
//these wont compile because without any relationship between class, you cannot store an
// object address in any another object pointer
return 0;
}
