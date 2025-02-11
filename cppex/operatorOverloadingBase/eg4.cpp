#include <iostream>
class Monitor
{
public:
Monitor & operator <<(int x)
{
printf("%d",x);
return *this;
}
Monitor & operator <<(const char *c)
{
printf("%s",c);
return *this;
}
Monitor & operator <<(float x)
{
printf("%f",x);
return *this;
}
Monitor & operator <<(double x)
{
printf("%lf",x); 
return *this;
}
Monitor & operator <<(char c)
{
printf("%c",c);
return *this;
}

Monitor &operator<<(void (*p)())
{
p();
return *this;
}
};

namespace thinkingmachines
{
void newLine()
{
printf("\n");
}
Monitor mout;
}
using namespace thinkingmachines;
int main()
{
mout<<10<<20<<newLine<<"Ujjain"<<newLine<<3.22<<newLine;
mout<<"cool";
mout<<3.22f;
mout<<3.22;
mout<<'A';
return 0;
}
