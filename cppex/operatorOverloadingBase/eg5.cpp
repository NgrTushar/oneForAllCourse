#include <stdio.h>
class Keyboard
{
public:
Keyboard & operator >>(int &p)
{
scanf("%d",&p);
fflush(stdin);
return *this;
}
Keyboard & operator >>(char &c)
{
scanf(" %c",&c);
fflush(stdin);
return *this;
}
Keyboard & operator>>(float &x)
{
scanf("%f",&x);
fflush(stdin);
return *this;
}
Keyboard & operator>>(double &x)
{
scanf("%lf",&x);
fflush(stdin);
return *this;
}
Keyboard & operator >> (char *c)
{
scanf("%s",c);
fflush(stdin);
return *this;
}
};

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
printf(" %c",c);
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
Keyboard kin;
}
using namespace thinkingmachines;
int main()
{
//mout<<10<<20<<newLine<<"Ujjain"<<newLine<<3.22<<newLine;
//mout<<"cool";
//mout<<3.22f;
//mout<<3.22;
//mout<<'A';
int x;
char m;
char a[21];
printf("ENter a Number (int type): ");
kin>>x;
printf("Enter a character: ");
kin>>m;
printf("Enter a string: ");
kin>>a;
printf("Data entry Done.");
printf("%d\n",x);
printf("%c\n",m);
printf("%s\n",a);

//mout<<x;
return 0;
}
