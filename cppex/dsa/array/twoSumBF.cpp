//Brute force approach of Two Sum Problem
#include <iostream>
#include <vector>
using namespace std;
int main()
{
vector <int>v{10,5,1,4,6,2,8,9};
int target{17};
vector <int>result;
for(int i{0}; i<v.size();i++)
{
int find=target-v[i];
for(const auto &e:v)
{
int index=i;
if(find==e) result.push_back(e);
}
}
for(const auto &e:result)
{
cout<<e<<" ";
}


return 0;
}

