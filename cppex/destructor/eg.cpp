//Just as the constructor runs only after the object is created, similarly the destructor will run before the object dies.
// it is represented with tilt symbol 
#include<iostream>
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
aaa a,b;
cout<<"Cool\n";
sam();
cout<<"End\n";
return 0;
}
