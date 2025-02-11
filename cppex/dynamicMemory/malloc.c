#include<stdio.h>
#include<stdlib.h>
int main()
{
int *p=malloc(sizeof(int)); // it does not initialises it
// this is compiled in c not c++ if compiled in c++ there will be an error of vo//id* conversion error and if you wan12t this to compile in c++ compiler too then 
// perform a type cast of of c like (int*)
*p=5; //a after initializing
printf("%d",*p);
free(p);// you should free the memory
// after freeing the memory now p points to the invalid address
// and if you try  to free the memory again the program will crash
//instead assign null to the pointer just after freeing the memory so that that error does not occur
free(p);

return 0;
}
