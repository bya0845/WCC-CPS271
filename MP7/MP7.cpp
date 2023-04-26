// MP7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Person.h"
#include "Family.h"

using namespace std;

int main()
{
    std::cout << "Welcome to Machine Problem 7\n" << endl;
    Person Bo("Bo", "Yang", 35, "Father");
    Person Sally("Sally", "Wen Mao", 36, "Mother");
    Person Fiona("Fiona", "Lu", 10, "Child");
    Person Vivian("Vivian", "Hu", 12, "Child");
    cout << "Bo's full name is: " << Bo.getFullName() << endl;
    cout << "Sally's age is: " << Sally.getAge() << endl;
    cout << "Fiona's last name is " << Fiona.getLastName() << endl;
    Family family1;
    family1.addFamilyMember(Bo);
    family1.addFamilyMember(Sally);
    family1.addFamilyMember(Fiona);
    family1.addFamilyMember(Vivian);
    cout << "The size of the family is: "<< family1.numFamilyMembers() << endl;
    cout << "The second family member's first name is: " << family1.f[1].getFirstName() << endl;
    family1.findPerson("Fiona");
    family1.findPerson("Sally");
    family1.findPerson("Kyle");
    cout << Bo.getRole() << endl;
    cout << Sally.getRole() << endl;

    cout << "\ngetParents and getChildren tests\n" << endl;

    cout << "The parents in the family are:\n" << family1.getParents() << endl;
    cout << "The children in the family are:\n"<< family1.getChildren() << endl;

}
