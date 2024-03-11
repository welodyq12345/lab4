//
// Created by invokerk1d on 11.03.2024.
//

#include "Employee.h"
string Employee::show() {
    return  "Name :" + name + "\n"
    + "Salary:" + to_string(salary) +"\n"
    +"Age:" + to_string(age ) + "\n";
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