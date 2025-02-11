//copy constructor is written to initialize the object
#include <iostream>
using namespace std;
class Array
{
public:
Array()
{
cout<<"Constructor()\n";
data= new int[10];
for(int i=0;i<10;i++)
{
data[i]=i*i;
}
}
/*Array(const Array& other)
{
//data=new int[10];
for(int i=0;i<10;i++)
{
data[i]=other.data[i];
}
}*/

~Array()
{
cout<<"Destructor()\n";
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
myArray1.PrintData();
myArray1.SetData(1000,0);
myArray1.SetData(99,2);
myArray1.SetData(78,1);

myArray1.PrintData();
myArray2.PrintData();


return 0;
}
