//
// Created by invokerk1d on 11.03.2024.
//
#include <iostream>
#ifndef UNTITLED_EMPLOYEE_H
#define UNTITLED_EMPLOYEE_H
using namespace  std;


class Employee {
    int  age , salary;
    string name;
public:
    Employee(int age);
    Employee(int age, int salary);
    Employee(int age, int salary, string name);

    ~Employee(){ cout << "Destructor called:\n";};
    friend ostream &operator << (ostream &os, Employee &obj);
    friend istream &operator >> (istream &is, Employee &obj);

};


#endif //UNTITLED_EMPLOYEE_H
