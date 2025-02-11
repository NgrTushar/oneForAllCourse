#include<iostream>
#include<string>
using namespace std;


int ispal(string str,int i,int n)
{
           if(i>=n/2) return 1;
           
	  if(str[i]==str[n-i-1]) return  ispal(str,i+1,n);
           else {
	   return 0;
}
}  
  
    bool isPalin(int N)
    {
       string str=to_string(N);
       int x=0;
       x=ispal(str,0,str.length());
       return x;
        
    }

int main()
{
int N;
cout<<"Enter your Number: ";
cin>>N;
bool x=isPalin(N);
cout<<" "<<x;

return 0;

}
