#include "Person.h"
#include "Student.h"
#include <array>
#include <vector>
#include <iostream>

using namespace std;

int main()
{
	Person Bo("Bo", "8607291234");
	Student Aria("Aria", "1234567", 1);
	cout << Bo.display() << endl;
	cout << Bo.getName() << endl;
	Bo.setData("Bo", "5041234567");
	cout << Bo.display() << endl;
	cout << Aria.display() << endl;

	Student students[4]; // array of 3 students
	students[0] = Student("Aria", "1234567", 1);
	students[1] = Student("Pam", "2346575", 2);
	students[2] = Student("Sally", "33445566", 3);
	students[3] = Student("Jen", "44550066", 4);

	vector<Student>dynamicStudents(3); // dynamic array aka vector of 3 students
	dynamicStudents[0] = Student("Aria", "2346575", 1);
	dynamicStudents[1] = Student("Pam", "2346575", 2);
	dynamicStudents[2] = Student("Sally", "33445566", 3);
}