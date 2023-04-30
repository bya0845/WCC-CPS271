#ifndef PERSON_H
#define PERSON_H

#include <string>
using std::string;

class Person
{
protected:
    string m_name{};
    string m_phone{};

public:
    Person()
    {
    }

    ~Person() // destructor
    {
    }

    Person(string Name, string Phone) :m_name{ Name }, m_phone{ Phone }
    {
    }

    const string getName() const { return m_name; }

    void setData(string Name, string Phone) { m_name = Name, m_phone = Phone; }
    virtual string display()
    {
        return "Name: " + m_name + ", Phone: " + m_phone;
    };
};


#endif