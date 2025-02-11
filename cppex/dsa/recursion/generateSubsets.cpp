#include<iostream>
#include<string>
using namespace std;
void subsets(string str,string subset,int i)
{
if(i==str.length())
{
cout<<"For i :"<<i<<"is "<<subset<<"\n";
return;
}
subsets(str,subset,i+1);
subsets(str,subset+str[i],i+1);
}

int main()
{
string str="abcd";
string subset="";


subsets(str,subset,0);


return 0;
}
