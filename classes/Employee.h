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
    Employee(int age);
    Employee(int age, int salary);
    Employee(int age, int salary, string name);

    ~Employee(){ cout << "Destructor called:\n";};
    friend ostream &operator << (ostream &os, Employee &obj);
    friend istream &operator >> (istream &is, Employee &obj);

};


#endif
