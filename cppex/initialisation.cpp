#include<iostream>
#include<string>
int main()
{
int a1; //un initialised
int a2=0; //
int a3(5); // Direct initialisation
std::string s1;
std::string s1("Yes"); //Direct Initialisation

char b1[8]; //uninitialisation
char b2[8] = {'\0'}; //'\0' is  num terminating character also C. I. 
char b3[8] = {'a','b','c','d'}; //Agregate initialisation also copy initialisati                                  on
char b4[8] = {"abcd"}; //Copy initialisation\


int c1{}; //Value Initialisation automatically initialised to its default value
int c2(); // this creates a function called c2 which accepts void and returns
          //int called as Most vexing parse but with uniform initialisation this          // is gone 
int c3{5}; // Direct initialisation

char d1[8]{}; //Automatically initialises the array with the default 
char d2[8]{"Hello"};


int *p=new int{};

char *p=new char[]{};
char *p2=new char[]{"Hello"};


/*
1. Value initialisation=> T obj{};
2. Direct initialisation=> T obj{0};
3. Copy initialisation=> T obj = v;

*/
/*\

1 it forces initialisation 
\

1 it forces initialisation 


\

1 it forces initialisation 
2. it prevents narrowing conversion.
*/

}
