#include <iostream>
using namespace std;
class Bulb
{
private:
int Wattage{0};

public:
Bulb(int w=0)
{
Wattage=w;
}
void SetWattage(int &&w)
{
if(w>=0 && w<=240) Wattage=w;
else Wattage=0;
}
void GetWattage(int &w)
{
w=Wattage;
}
};



int main()
{
Bulb b;
Bulb* p=&b;
b.SetWattage(4);
(*p).SetWattage(12);
p->SetWattage(20);
int wattage;
b.GetWattage(wattage);
cout<<wattage<<'\n';
(*p).GetWattage(wattage);
cout<<wattage<<'\n';

p->GetWattage(wattage);//-> is a reference operator
cout<<wattage<<'\n';
b.GetWattage(wattage);
cout<<wattage<<'\n';
(*p).GetWattage(wattage);
cout<<wattage<<'\n';
return 0;
}
