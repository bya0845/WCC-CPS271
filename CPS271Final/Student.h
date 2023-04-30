#ifndef STUDENT_H
#define STUDENT_H
#include <string>
#include "Person.h"
#include <memory> //for unique pointers
using namespace std;

class Student : public Person
{
private:
	unique_ptr<int>m_studID; //makes m_studID a unique pointer so that no destructor/copy constructor is needed
public:
	Student()
	{
	}

	Student(string Name, string Phone, int InputID) :Person{ Name, Phone }, m_studID{ new int{InputID} }
	{
	}

	string display() override // overrides base class display()
	{
		return Person::display() + ", ID: " + to_string(*m_studID);
	}
};

#endif