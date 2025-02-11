#include<iostream>
using namespace std;
int main()
{
int x=5;
const int MAX =12;
int &ref_x1=x;
const int &ref_x2=x;
ref_x1=MAX;
//ref_x2=MAX;
cout<<ref_x1<<" "<<ref_x2<<endl;
const int *ptr=&x;
int *const ptr1=&x; //iddhar ptr jisko point kar rha hai vo pointer change ho sa                    kta hai but ptr1 mai jo value hai vo change nhi hogi proof b                    elow;
//Here pointer ptr which is pointing to the address can be changed but pointer ptr1 pointing to the address cannot be changed because it is declared const itself;
const int * const ptr2=&x;
const int y=10;
cout<<"PTR : "<<*ptr<<" "<<ptr<<" "<<&x<<endl ;
cout<<"PTR1 : "<<*ptr1<<" "<<ptr1<<" "<<&x<<endl;
ptr=&y;
//ptr1=&y;
*ptr1=y;
cout<<"PTR : "<<*ptr<<" "<<ptr<<" "<<&y ;
cout<<"PTR1 : "<<*ptr1<<" "<<ptr1<<" "<<&y;

return 0;
}
