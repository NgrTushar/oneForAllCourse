#include "Integer.h"
#include <iostream>
Integer::Integer() {
	std::cout << "Integer()" << std::endl;
	m_pInt = new int(0);
}

Integer::Integer(int value) {
std::cout << "Integer(int)" << std::endl;
	m_pInt = new int(value);
}

Integer::Integer(const Integer & obj) {
	std::cout << "Integer(const Integer&)" << std::endl;
	m_pInt = new int(*obj.m_pInt);
}

Integer::Integer(Integer && obj) {
	std::cout << "Integer(int&&)" << std::endl;
	m_pInt = obj.m_pInt;
	obj.m_pInt = nullptr;
}


Integer& Integer::operator =(const Integer &obj)
{
 std::cout<<"Integer & operator=(const Integer &obj)\n";
 if(this==&obj)
 {
  return *this;
 }
 delete m_pInt;
 m_pInt=new int(*obj.m_pInt);
 return *this;
}


Integer& Integer::operator =(Integer &&obj)
{
std::cout<<"Integer & operator=(Integer &&obj)\n";
if(this==&obj)
{
return *this;
}
delete m_pInt;
m_pInt=obj.m_pInt;
obj.m_pInt=nullptr;
return *this;
}

int Integer::GetValue() const {
	return *m_pInt;
}

void Integer::SetValue(int value) {
	if(m_pInt==nullptr)
	{
         m_pInt=new int{}; 
	}
// this Implementation of nullptr is important because when object will be pointing to 
// nothing then you should allocate memory for pointer then assign address to it
// in case where std::move() is used and current object is assigned nullptr
//
*m_pInt = value;
}


Integer::~Integer() {
	std::cout << "~Integer()" << std::endl;
	delete m_pInt;
}
