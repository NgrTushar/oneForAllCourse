#include <iostream>
using namespace std;
void call(int &req)
{

if(req<0) return;
cout<<req<<" ";
call(--req);
}

int main()
{
int req;
cout<<"Enter Requirement: ";
cin>>req;
call(req);


return 0;
}
