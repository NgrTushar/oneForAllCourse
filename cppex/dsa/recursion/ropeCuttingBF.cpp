#include<iostream>
#include<algorithm>
using namespace std;
int countCuts(int n,int a,int b,int c)
{
if(n==0) return 0;
if(n<=-1) return -1;
int res=max(max(countCuts(n-a,a,b,c),countCuts(n-b,a,b,c)),countCuts(n-c,a,b,c));
if(res==-1) return -1;

return res+1;

}


int main()
{
int n=23;
int a,b,c;
a=11;
b=12;
c=9;
int res=countCuts(n,a,b,c);
cout<<res;

return 0;
}
