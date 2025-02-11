#include <iostream>
using namespace std;
void add(float x,float y)
{
cout<<x+y<<'\n';
}
/*void add(int x,int y)
{
cout<<x+y<<'\n';
}*/
//this function defined does not add to the signature of the function hence this code 
//wont compile until you comment or remove it from the program
int add(int x,int y)
{
return x+y;
}
int add(int x,int y, int z) 
{
return x+y+z;
}
//just like this you can change the signature of a function and compiler will give name 
// to this add function a different name like add int int int


//function overloading is the technique through which function overloading can be achieved
int main()
{
add(3,4);
add(1,2,5);
add(1.2f,4.5f);
return 0;
}
