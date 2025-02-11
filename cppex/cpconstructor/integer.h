#pragma once

class Integer
{
int *m_pInt;
public:
Integer();  //default constructor
Integer(int value);  //paramaterised constructor
int getValue() const;
void setValue(int value);
};
