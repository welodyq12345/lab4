#ifndef UNTITLED_ROCK_H
#define UNTITLED_ROCK_H
#include <iostream>
#include "Asoortment.h"
using namespace std;


class Rock : public Asoortment
{
    string firstPerformer, firstTrack;
public:
    Rock();
    Rock(string performer, string track, int price, int amountOfLikes, string firstPerformer, string firstTrack);
    ~Rock(){ countOfProduct--; };

    friend ostream &operator << (ostream &os, Rock &obj);
};


#endif