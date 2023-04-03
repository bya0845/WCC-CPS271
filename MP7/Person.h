#ifndef PERSON_H
#define PERSON_H

#include <string>
using std::string;

class Person
{
private:
    string _firstname;
    string _lastname;
    int _age;
    string _role;      // "Father", "Mother", "Child", "Grandmother", etc.

public:
    Person();
    Person(string firstname, string lastname, int age, string role);

    string getFirstName() const;
    string getLastName() const;
    string getFullName() const;
    string getRole() const;
    int getAge() const;

    void setAge(int age);
};


#endif
