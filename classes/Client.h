//
// Created by invokerk1d on 11.03.2024.
//

#include<iostream>
#ifndef UNTITLED_CLIENT_H
#define UNTITLED_CLIENT_H
using namespace std;


class Client {
    int age, credit;
    string name ;

public:
    Client(int age, int credit , string name);
    ~Client();
    friend ostream &operator << (ostream &os, Client &obj);
    friend istream &operator >> (istream &is, Client &obj);

Client();
};






#endif //UNTITLED_CLIENT_H
