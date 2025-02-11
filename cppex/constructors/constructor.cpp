#include<iostream>
using namespace std;
class aaa
{
public:
aaa():aaa(0) // before this aaa() constructor body executed it will invoke to another constructor and then same with aaa(int x) constructor; it will jump to another constructor before executing its body then body of all constructor will getexecuted in the order they were called.
{
cout<<"aaa() called"<<"\n";
}
aaa(int x):aaa( x,0)
{
cout<<"aaa(int) called"<<"\n";
}
aaa(int x, float y)
{
cout<<"aaa(int,float) called \n";
}

};
//if a programmer does not provide any constructor then compiler will provide an empty constructor
//and copy constructor in the program
// But if programmer writes its own default constructor or parameterised constructor then 
// it will only provide copy constructor and wont write move constructor

int main()
{
aaa a1;


return 0;
}
