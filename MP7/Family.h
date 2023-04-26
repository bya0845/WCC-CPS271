#ifndef FAMILY_H
#define FAMILY_H

#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

#include "Person.h"

using std::string;
using std::cout;
using std::endl;

class Family
{
public:
    std::vector<Person> f;

public:
    Family()
    {
    }

    /*"add" a family member by passing in Person object and storing it in the array */
    void addFamilyMember(Person p)
    {
        f.emplace_back(p);
    }

    // get family member at i-th array position
    Person getFamilyMember(int i) const
    {
        return f.at(i);
    }

    // return the number of family members
    const int numFamilyMembers() const { return static_cast<int>((f.size())); }

    // check if a person with the given firstname is in Family
    bool findPerson(string firstName) const
    {
        for (int i = 0; i < f.size(); ++i)
        {
            if (f[i].getFirstName()==firstName)
            {
                cout << "This person is in the family" << endl;
                return true;
            }
        }
        cout << "This person is not in the family" << endl;
        return false;

    }

    // return a list of all family members who are parents ("Father or Mother")
    const string getParents() const
    {
        string j;
        for (int i = 0; i < f.size(); ++i)
        {
            if ((f[i].getRole() == "Mother")||(f[i].getRole() == "Father"))
            {
                j +=  f[i].getFullName()+"\n";
            }
        }
        return j;
   
    }

    // return a list of all family members who are kids
    const string getChildren() const
    {
        string j;
        for (int i = 0; i < f.size(); ++i)
        {
            if (f[i].getRole() == "Child")
            {
                j += f[i].getFullName()+"\n";
            }
        }
        return j;
    }
};

#endif