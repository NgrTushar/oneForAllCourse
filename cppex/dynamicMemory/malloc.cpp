#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<cstring> //strcpy(defined in this header)
void malloc()
{
int *p=(int*)malloc(sizeof(int)); // it does not initialises it
// this is compiled in c not c++ if compiled in c++ there will be an error of vo//id* conversion error and if you wan12t this to compile in c++ compiler too then 
// perform a type cast of of c like (int*)
// Just after using malloc or calloc check if memory got allocated or not
//p=NULL;
if(p==NULL)
{
printf("Failed to allocate memory");
return ;
}
*p=5; //a after initializing
printf("%d",*p);
free(p);// you should free the memory
// after freeing the memory now p points to the invalid address
// and if you try  to free the memory again the program will crash
//instead assign null to the pointer just after freeing the memory so that that error does not occur
p=NULL;
free(p);
}
void New()
{
int *p=new int(5);
//*p=5;
std::cout<<*p<<std::endl;
//nee dto delete p
delete p;
//after deleting p need to point the pointer to nullpointer so that if deleted a// again program does not crash;
p=nullptr;
}
void newArray()
{
 int *p=new int[5];
 int *x=new int[5]{1,2,3,4,5};
 for(int i=0;i<5;i++)
 {
  p[i]=i;
 }
 delete []p; // must specify [] to delete entire array;
 delete []x;
}
void Strings()
{
char *P= new char[4];// extra 1 byte for the terminating character;
strcpy(P,"C++");
std::cout<<P<<std::endl;
delete []P;
}
void TowD(){
int *p1=new int[3];
int *p2=new int[3];
int **pData= new int *[2];
pData[0]=p1;
pData[1]=p2;
pData[0][1]=2;
std::cout<<pData[0][1]<<std::endl;
// have to free the memory in the same oreder and must have same no. of calls
// delete and new 
delete []p1;// delete []pData[0];
delete []p2;//delete []pData[1];

delete []pData;
}

int main()
{
int data[2][3]={
1,2,3,
4,5,6
};//1,2,3,4,5,6
std::cout<<data[0][1]<<std::endl;
//if we want allocate memory in heap we hveto represent each row as 1d 
//Array 
TowD();
New();
newArray();
Strings();
return 0;
}
