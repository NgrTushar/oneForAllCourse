#include <iostream>
#include <string.h>
class Bulb
{
char title[36];
public:
void getTitle(char * a)
{
strcpy(a,title);
}
void setTitle(const char *t)
{
if(strlen(t)>35) title[0]='\0';
else strcpy(title,t);
}
};


int main()
{
Bulb b;
b.setTitle("Learn C++");
char T[36];
b.getTitle(T); // Here compiler will write &T[0] which is a base address of char string
std::cout<<T<<std::endl;
return 0;
}
