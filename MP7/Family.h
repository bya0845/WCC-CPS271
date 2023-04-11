#ifndef FAMILY_H
#define FAMILY_H

#include <string>
#include <vector>

#include "Person.h"

using std::string;

class Family
{
private:
    std::vector<Person> f;

public:
    Family();

    /*"add" a family member by passing in Person object and storing it in the array */
    void addFamilyMember(Person p);

    // get family member at i-th array position
    Person getFamilyMember(int i) const;

    // return the number of family members
    int numFamilyMembers() const;

    // check if a person with the given firstname is in Family
    bool findPerson(string firstName) const;
    // return a list of all family members who are parents ("Fathe or Mother")
    string getParents() const;

    // return a list of all family members who are kids
    string getChildren() const;
};

#endif