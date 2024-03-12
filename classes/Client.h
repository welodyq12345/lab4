#include<iostream>
#include "People.h"
#ifndef UNTITLED_CLIENT_H
#define UNTITLED_CLIENT_H
using namespace std;


class Client : public People
{
    string tel;

public:
    Client(int age, int credit , string name);
    ~Client();
    friend ostream &operator << (ostream &os, Client &obj);


Client();
};






#endif
