//
// Created by invokerk1d on 11.03.2024.
//
#include <iostream>
#ifndef UNTITLED_ASOORTMENT_H
#define UNTITLED_ASOORTMENT_H
using namespace std;


class Asoortment {
int price , amountOfLikes;
string  performer;

public:
    Asoortment(): price(0) , amountOfLikes(0) , performer(""){};
    Asoortment(int price );
    Asoortment(int price , int amountOfLikes);
    Asoortment(int price , int amountOfLikes, string performer);
    string show() const;

    Asoortment(const Asoortment &other);
    Asoortment(Asoortment &&other);




};


#endif //UNTITLED_ASOORTMENT_H
