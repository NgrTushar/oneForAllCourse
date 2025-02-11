#include <iostream>
#include <cstdint> // for uintptr_t
using namespace std;
int main()
{
int x{0};
cout<<&x<<'\n';//cout prints address in hexadecimal form
//cout<<(unsigned int)&x<<'\n';
//this line may compiler in some machines which allow the 
//risk of loosing precision as pointer size is greater 
//than the unsigned int
// Solution: use uintptr_t it can hold pointer without
//loosing preciion
cout<<reinterpret_cast<uintptr_t>(&x);

return 0;
}
