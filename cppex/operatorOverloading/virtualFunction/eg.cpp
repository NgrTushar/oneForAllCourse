//In this program memory is wasted by creating object of class whose object wont be used in the lifetime of this program
//You can Either use Maruti800 object or HondaCity object 
// Solution in eg1.cpp how not to waste this much space while creating object of class

#include<iostream>
using namespace std;
class Maruti800
{
//1000's of properties
public:
void manual()
{
cout<<"Operational Details of Maruti*800"<<endl;
}

};
class HondaCity
{
//1000's of properties
public:
void manual()
{
cout<<"Operational details of HondaCity\n";
}
};

int main()
{
Maruti800 m;
//Object size will be according to the properties of Maruti800
HondaCity h;
//Object size will be according to the properties of HondaCity;
int ch;
cout<<"1. Maruti800\n";
cout<<"2. HondaCity\n";
cout<<"Enter your choice: ";
cin>>ch;
if(ch==1)
{
m.manual();
}else if(ch==2){
h.manual();
}
else{
cout<<"Invalid Choice";
}
cout<<std::flush;
return 0;
}
