//Non-static methods of any class cannot be accessed without creating an object of that 
//class although static methods can be accessed just by the name of the class as well as
// from the object of the class
#include <iostream>
using namespace std;
class aaa
{
public:
void sam(){
cout<<"Sam()\n";
}
static void tom()
{
cout<<"tom()\n";
}
};


int main()
{
//aaa::sam();//not allowed
aaa::tom();

return 0;
}

