//now i want monitor<<10<<20; to get compiled as i want to print that way
// Here we have changed return type of our operator function to return the address 
// of the Monitor type object address 
#include<stdio.h>
class Monitor
{
public:
Monitor & operator << (int x)
{
printf("%d\n",x);
return *this;
}
Monitor & operator <<(double x)
{
printf("%lf\n",x);
return *this;
}
Monitor & operator <<(float x)
{
printf("%f\n",x);
return *this;
}
Monitor & operator <<(const char * c)
{
printf("%s\n",c);
return *this;
}
Monitor & operator<<(char c)
{
printf("%c\n",c);
return *this;
}

};
namespace thinkingmachines
{
Monitor mout;
}
using namespace thinkingmachines;

int main()
{
mout<<10<<20<<"Ujjain"<<'A'<<3.22<<3.22f;
mout<<'A';
mout<<2.3f;
mout<<2.33;
mout<<"Cool";
return 0;
}
