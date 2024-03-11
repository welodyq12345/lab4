//
// Created by invokerk1d on 11.03.2024.
//

#include "Employee.h"
ostream &operator << (ostream &os, Employee &obj){
    return os << "Name :"  << obj.name  <<  "\n"
    <<  "Salary:" << obj.salary  << "\n"  <<
    "Age:"  << obj.age  <<  "\n";

};
istream &operator >> (istream &is, Employee &obj){;
    return is >> obj.name >> obj.age >> obj.salary ;
}



Employee::Employee(int age) {
    this->age = age;
};
Employee::Employee(int age, int salary) {
    this -> age = age;
    this->salary = salary;
};
Employee::Employee(int age, int salary, string name) {
    this -> age = age;
    this->salary = salary;
    this->name = name;
};