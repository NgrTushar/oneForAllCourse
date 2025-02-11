// as you can see that any change in myArray1 object reflects the same change in 
// myArray2 object 
// but we created a pointer which need to be freed to do that we need to write destructor
// manually also the allocated memory in default constructor
// see follow up example eg1.cpp
#include <iostream>
using namespace std;
class Array
{
public:
Array()
{
data= new int[10];
for(int i=0;i<10;i++)
{
data[i]=i*i;
}
}

void PrintData()
{
for(int i=0;i<10;i++)
{
cout<<data[i]<<"\n";
}
}
void SetData(int value,int index)
{
data[index]=value;
}

private:
int *data;
};

int main()
{
Array myArray1;
Array myArray2(myArray1);
myArray1.PrintData();

myArray1.SetData(1000,0);
myArray1.PrintData();
myArray2.PrintData();


return 0;
}
