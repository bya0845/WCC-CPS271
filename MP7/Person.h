#ifndef PERSON_H
#define PERSON_H

#include <string>
using std::string;

class Person
{
private:
    string _firstname{};
    string _lastname{};
    int _age{};
    string _role{};      // "Father", "Mother", "Child", "Grandmother", etc.

public:
    Person()
    {
    }

    Person(string firstName, string lastName, int age, string role) :_firstname{ firstName }, _lastname{ lastName }, _age{age},_role{role}
    {
    }

    const string getFirstName() const { return _firstname; }
    const string getLastName() const { return _lastname; }
    const string getFullName() const { return _firstname+" "+_lastname; }
    const string getRole() const { return _role; }
    const int getAge() const { return _age; }

    void setAge(int age) { _age = age; }
};


#endif
