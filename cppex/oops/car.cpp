#include "car.h"
#include<iostream>
using namespace std;
int Car::totalCount;
Car::Car()
{
++totalCount;
cout<<"Car() : Constructor called"<<"\n";
//fuel=0;
//passengers=0;
//speed=0;
}
Car::Car(float amount)
{
++totalCount;
fuel=amount;
//passengers=0;
//speed=0;
}
Car::Car(float amount,int pass)
{
fuel=amount;
speed=0;
passengers=pass;
}
Car::~Car()
{
--totalCount;
cout<<"~Car() : Destructor Called"<<endl;
}
void Car::FillFuel(float amount){
fuel=amount;
}
void Car::Accelerate()
{
speed++;
fuel-=0.5f;
if(fuel<0)
{
cout<<"Fuel Empty!.. REFUEL"<<"\n";
fuel=0;
speed=0;
}
}
void Car::Brake()
{
speed=0;
}

void Car::AddPassengers(int count)
{
passengers=count;
}

void Car::Dashboard()
{
cout<<"Fuel : "<<fuel<<endl;
cout<<"Speed : "<<speed<<endl;
cout<<"Passengers : "<<passengers<<endl;
cout<<"Total cars : "<<totalCount<<endl;
}
//static member function is created so that if we dont have an object to keep track of total number of objects created;
// wwe can acces through an static member function of that class
void Car::showCount() 
{
cout<<"Total Number of Cars: "<<totalCount<<endl;
}
