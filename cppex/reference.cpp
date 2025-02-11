#include<iostream>
using namespace std;
int main()
{
//refrent
int x=10;
int &ref=x;
int y=128;
ref=y;
cout<<"ref : "<< ref<<endl;

return 0;
}
