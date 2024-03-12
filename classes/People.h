#ifndef UNTITLED_PEOPLE_H
#define UNTITLED_PEOPLE_H
#include <iostream>
using namespace std;

class People
{
protected:
    string name;
    int age, money;

public:
    People(string name, int age, int money);
    People(const People &other); //Deep Copy
    People(People &&other); //Move
};


#endif
