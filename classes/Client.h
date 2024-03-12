#include<iostream>
#include "People.h"
#ifndef UNTITLED_CLIENT_H
#define UNTITLED_CLIENT_H
using namespace std;


class Client : public People
{
    string tel;

public:
    Client();
    Client(string name, int age, int money, string tel);
    Client(Client &&other);
    ~Client(){};

    friend ostream &operator << (ostream &os, Client &obj);
};






#endif
