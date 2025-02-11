#include <iostream>
#include <string>
using namespace std;
void check(int i,string arr,int n)
{
if(i>=n/2)
{
cout<<"It is palindrome";
return;
}
if(arr[i]==arr[n-1]) check(i+1,arr,n-i-1);
else
{
cout<<"\nNot palindrome";
return;
}
}


int main()
{
string s;
cin>>s;

int i{0};
check(i,s,s.size());
return 0;
}
