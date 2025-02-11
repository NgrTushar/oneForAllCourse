// wrote destructor in this example but it will going to give runtime error
// it does like myArray2.data=myArray.data
// the free copy constructor and copy assignment contructor given by compiler
//it does a shallow copy  because of that the pointer data us being freed 2 times
// WHAT IS THE SOLUTION OF THIS- DEEP COPY 
// FOLLOW EG2.CPP
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
~Array()
{
delete []data;
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
