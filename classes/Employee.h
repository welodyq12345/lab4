#include <iostream>
#include "People.h"
#ifndef UNTITLED_EMPLOYEE_H
#define UNTITLED_EMPLOYEE_H
using namespace  std;


class Employee : public People
{
    string dateOfBirthday, location;
    int stage;
public:
    Employee();
    Employee(string name, int age, int salary, string dateOfBirthday, string location, int stage);
    Employee(const Employee &other);
    ~Employee(){};

    friend ostream &operator << (ostream &os, Employee &obj);
};


#endif
