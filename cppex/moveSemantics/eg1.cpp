// Elide(verb): to omit or leave out
//Elision(noun) : the act or instance of omission
// output of this source code without using -fno-elide-constructor is 
//Integer(int) ~Integer()
// even after using this flag compiler might not allow that because the optimisation is
// is done by default
#include <iostream>
using namespace std;
class Integer
{
private:
int *p=nullptr;
public:
Integer()
{
cout<<"Integer()\n";
p=new int(0);
}
Integer(int value)
{
cout<<"Integer(int)\n";
p=new int(value);
}
Integer (const Integer &obj)
{
cout<<"Integer(const Integer &obj)\n";
p= new int(*obj.p); 
}
/*Integer(int &&obj)
{
cout<<"Integer(int &&obj)\n";
*p=obj;
}*/
Integer(Integer &&obj)
{
cout<<"Integer(Integer &&)\n";
p=obj.p;
obj.p=nullptr;
}
int getvalue()const
{
return *p;
}
void setValue(int value)
{
*p=value;
}
~Integer()
{
cout<<"~Integer()\n";
delete p;
}

/*Integer operator =(const Integer &obj)
{

}*/
};
Integer Add(int a,int b)
{
Integer temp(a+b);
//temp.setValue(a.getvalue()+b.getvalue());
return temp;
}

int main()
{
Integer a=3;
// using assignment operator to initialize user defined object with a primitive type
//these are not compatible type so compiler will expand it as Integer a= Integer(3); 
// Here compiler leave out the object created instead parameterised constructor of that
// class is invoked directly this is called copy elision 
// to turn off copy elision 	 
//Integer a(1),b(4),c;
//Add(a,b);
//Add(a,c);
return 0;}
