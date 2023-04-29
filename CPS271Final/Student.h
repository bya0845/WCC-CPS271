#ifndef STUDENT_H
#define STUDENT_H
#include <string>
#include "Person.h"
using namespace std;

class Student : public Person
{
private:
	int* m_studID{};
public:
	Student()
	{
	}

	~Student()
	{
		delete m_studID;
	}

	Student(string Name, string Phone, int InputID) :Person{ Name, Phone }, m_studID{ new int{InputID} }
	{
	}

	string display() override
	{
		return Person::display() + ", ID: " + to_string(*m_studID);
	}
};

#endif