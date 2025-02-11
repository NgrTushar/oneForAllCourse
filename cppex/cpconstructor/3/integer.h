#pragma once
class Integer
{
int *p;
public:
Integer();
Integer(int value);
Integer(const Integer &obj); 
//need to pass the object by refrence but if you pass it by value it will go in a loop
// constructor will keep making copy of an object and that would invoke copy constructor 
// again
void SetValue(int v);
int GetValue() const; //GetValue() is declared as a const member function using the const keyword at the end of the function declaration. This means that GetValue() can be called on both const and non-const objects of the class MyClass. Inside the GetValue() function, any attempt to modify the state of the object (such as modifying non-static data members) would result in a compilation error.
// when writing const return type it doesnt make sure that the value wont get modified

~Integer();
};
