//this example may give undefined behaviour (i.e.which can lead to unpredictable results.
//Undefined behavior means that the C++ standard does not define the outcome of certain
//operations, so different compilers or compiler versions may exhibit different behaviors.
//it will delete only one object to delete all object space you need to write delete []a;
// as memory of array will be deallocated only this way. 
#include <iostream>
using namespace std;
class aaa
{
public:
aaa()
{
cout<<"Default Constructor\n";
}
~aaa()
{
cout<<"Destructor called\n";
}
};

void sam()
{
aaa g,t,m;
cout<<"function called\n";
}

int main()
{
aaa *b;
cout<<"Cool\n";
b=new aaa[5];
cout<<"yes\n";
//delete b; // whatever was created by *b will get destroyed here
delete []b; //whatever memory b holds will get destroyed
cout<<"Ujjain\n";
return 0;
//but whatever was created by a will get gets destoryed here
}
