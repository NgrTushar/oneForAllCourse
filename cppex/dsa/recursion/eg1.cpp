#include <iostream>
using namespace std;
void call(int &i,const int &n)
{
if(i>n) return;
cout<<i<<" ";
call(++i,n);
}

int main()
{
int i{1};
int n{5};
call(i,n);


return 0;
}
