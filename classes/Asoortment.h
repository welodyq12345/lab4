#ifndef UNTITLED_ASOORTMENT_H
#define UNTITLED_ASOORTMENT_H
#include <iostream>
using namespace std;


class Asoortment
{
protected:
    int price , amountOfLikes;
    string  performer, track;
    static int  countOfProduct;

public:
    Asoortment();
    Asoortment(string performer, string track, int price, int amountOfLikes);
    ~Asoortment(){ countOfProduct--; };

    static int countOfProducts() { return countOfProduct; };
    Asoortment &operator=(const Asoortment &obj);

};
#endif