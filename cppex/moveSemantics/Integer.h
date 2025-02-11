#pragma once
#include <iostream>
class Integer 
{
public:
int *m_pInt;
int *m_pInt2;
public:
//Default constructor
Integer();

//Parameterized constructor
Integer(int value);

//Copy constructor
Integer(const Integer &obj);

//Move constructor
Integer(Integer &&obj);
//Copy assignment operator
Integer & operator =(const Integer &obj);
//Move assignment operator
Integer & operator =(Integer &&obj);
int GetValue()const;
void SetValue(int value);
~Integer();
};
