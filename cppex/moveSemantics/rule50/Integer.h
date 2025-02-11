#pragma once
class Integer
{
int *p;
public:
Integer();
Integer(int value);
Integer(const Integer &other);
Integer(Integer &&obj);
Integer & operator =(const Integer& other);
Integer & operator=(Integer &&other);
int GetValue() const;
void SetValue(int value);
~Integer();
};
