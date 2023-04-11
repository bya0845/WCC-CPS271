#ifndef FAMILY_H
#define FAMILY_H

#include <iostream>
#include <string>
#include <vector>
#include <memory>

#include "Person.h"

using std::string;
using std::shared_ptr;

class Family
{
private:
    std::vector<shared_ptr<Person>> f;

public:
    Family() {};

    /*"add" a family member by passing in Person object and storing it in the array */
    void addFamilyMember(shared_ptr<Person> p)
    {
        f.emplace_back(p);
    }

    // get family member at i-th array position
    Person getFamilyMember(int i) const
    {
        return *f[i];
    };

    // return the number of family members
    int numFamilyMembers() const
    {
        return f.size();
    };

    // check if a person with the given firstname is in Family
    bool findPerson(string firstName) const
    {
        for (int i = 0; i < f.size(); ++i)
        {
            if (f[i]->getFirstName() == firstName)
            {
                return 1;
            };
        }
    }

    // return a list of all family members who are parents ("Fathe or Mother")
    string getParents() const
    {
        for (int i = 0; i < f.size(); ++i)
        {
            if (f[i]->getRole() == "Father" or "Mother")
            {
                std::cout << f[i] << std::endl;
            }
        }
    }

    // return a list of all family members who are kids
    string getChildren() const
    {
        for (int i = 0; i < f.size(); ++i)
        {
            if (f[i]->getRole() == "kid")
            {
                std::cout << f[i] << std::endl;
            }
        }
            
    }
};

#endif