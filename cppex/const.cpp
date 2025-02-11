#include<iostream>
int main()
{
using namespace std;
float radius=0;
const float PI=3.14159f; //const variables are declared with the uppercase;
                           //fixed at compile time and cannot be modified later
cin>>radius;

float area = PI*radius*radius;
float circumference= 2*PI*radius;
cout<<"Area : "<< area<<endl;
cout<<"Circumference : "<<circumference<<endl;

return 0;
}
