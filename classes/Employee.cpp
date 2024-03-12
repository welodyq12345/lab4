#include "Employee.h"
ostream &operator << (ostream &os, Employee &obj)
{
   return os << "Name: " << obj.name << endl
             << "Age: " << obj.age << endl
             << "Salary: $" << obj.money << endl
             << "Date Of Birthday: " << obj.dateOfBirthday << endl
             << "Location: " << obj.location << endl
             << "Stage: " << obj.stage << "c.y." << endl;
};

Employee::Employee()
    : People(), dateOfBirthday(""), location(""), stage(0) {};

Employee::Employee(const Employee &other)
    :People(other), dateOfBirthday(other.dateOfBirthday), location(other.location), stage(other.stage){};

Employee::Employee(string name, int age, int salary, string dateOfBirthday, string location, int stage)
    : People(name, age, money), dateOfBirthday(dateOfBirthday), location(location), stage(stage) {};
