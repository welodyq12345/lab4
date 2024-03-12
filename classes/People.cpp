#include "People.h"

People::People()
    : People("", 0, 0){};

People::People(string name, int age, int money)
    : name{name}, age{age}, money{money} {};

People::People(const People &other)
    : name(other.name), age(other.age), money(other.money) {};

People::People(People &&other)
    : name(other.name), age(other.age), money(other.money)
{
    other.name = "";
    other.age = 0;
    other.money = 0;
};
