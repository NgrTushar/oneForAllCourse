#pragma once
class car
{
private:
//attributes of class
float fuel{0};
float speed{0};
int passengers{0};
public: 
//behavioiur of class
void FillFuel(float fuel);
void AddPassengers(int passengers)
void Brake();
void Accelerate();
void Dashboard();
};

