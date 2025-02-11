#include <iostream>
using namespace std;
void call(int &i,const int &n)
{
if(i>n) return;
cout<<"Any\n";

call(++i,n);
}

int main()
{
int i{0};
call(i,5);

return 0;
}
