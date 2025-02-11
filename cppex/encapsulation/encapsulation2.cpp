#include <iostream>
#include <string.h>
using namespace std;
//using c lang to get to know what is problem if we return array as a property 

class Book
{
private:
char title[36];
public:
void setTitle(const char *t)
{
if(strlen(t)) title[0]='\0';
else strcpy(title,t);
}
char* getTitle()
{
return title;
}
};

int main()
{
Book b;
b.setTitle("Encapsulation");
cout<<"Title : "<<b.getTitle()<<'\n';
return 0;
}
