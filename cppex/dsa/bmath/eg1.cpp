#include <iostream>
using namespace std;
int main()
{
int x{56};
int i=1;
while(i<=x/2)
{
if(x%i==0)
{
cout<<i<<"\n";
}
i++;
}

return 0;
}
