#include "Client.h"
ostream &operator << (ostream &os, Client &obj)
{
    return os << "Name: " << obj.name << endl
              << "Age: " << obj.age << endl
              << "Credit: $" << obj.money << endl
              << "Telephone: " << obj.tel << endl;
};

Client::Client()
    : People(), tel(""){};

Client::Client(string name, int age, int money, string tel)
    : People(name, age, money), tel(tel) {};

Client::Client(Client &&other)
    : People(other), tel(other.tel)
{
    other.name = "";
    other.age = 0;
    other.money = 0;
    other.tel = "";
};
