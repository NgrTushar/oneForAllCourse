//Backtracking using resursion

#include <iostream>
using namespace std;
void call(const int &i,const int &n)
{
if(i<1) return;

call(i-1,n);
printf("%d",i);
}



int main(void)
{
int n{0};
cin>>n;
call(n,n);
return 0;
}
