#include <stdio.h>
class Keyboard
{
public:
Keyboard & operator >>(int& x)
{
scanf("%d",&x);
fflush(stdin);
return *this;
}
Keyboard & operator >>(char& c)
{
scanf(" %c",&c);
fflush(stdin);
return *this;
}
Keyboard & operator>>(char *c)
{
scanf("%s",c);
fflush(stdin);
return *this;
}
};
namespace thinkingmachines
{
Keyboard kin;
}

using namespace thinkingmachines;

int main()
{
int x;
char m;
char a[21];
printf("ENter a number(int type): ");
kin>>x;
printf("Enter a character: ");
kin>>m;
printf("ENter a string: ");
kin>>a;
printf("Data Entry Done.\n");
printf("%d\n",x);
printf("%c\n",m);
printf("%s",a);
return 0;
}
