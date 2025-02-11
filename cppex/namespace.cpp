#include<iostream>
namespace avg{
float calculator(float x,float y)
{
return (x+y)/2;

}
}
namespace basic{
float calculator(float x,float y)
{
return x*y;
}
}
namespace Sort
{
void quickSort()
{
}
void insertionSort(){
}
namespace comparision{
void greater(){
}
void less(int x, int y){
std::cout<<(x<y? x : y);
}
}
}
int main()
{
using namespace avg;
std::cout<<calculator(1.2f,12.4f)<<std::endl;

std::cout<<basic::calculator(1.3f,4.5f)<<std::endl;
Sort::comparision::less(2,5);
return 0;
}
