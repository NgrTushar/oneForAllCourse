#include<iostream>
int main()
{
using namespace std;
const int Chunk_size=512;
const int *ptr=&Chunk_size;
//*ptr=1; //not allowed just declared const and we are trying to change the vari            able it is pointing to; just after assigning the address
std::cout<<"ptr: "<<ptr<<"\nChunk_size"<<&Chunk_size<<"\n";
int x=10;
ptr=&x;  // but this is allowed until you declare ptr const itself
std::cout<<"ptr: "<<ptr<<"\nChunk_size"<<&Chunk_size<<"\n";

const int *const ptr1 = &Chunk_size; 
std::cout<<"*ptr1: "<<*ptr1<<"\n"<<"ptr1: "<<ptr1<<"\n";
//ptr1=&x;
//*ptr=1; //not allowed
return 0;
}
