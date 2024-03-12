#ifndef UNTITLED_JAZ_H
#define UNTITLED_JAZ_H
#include <iostream>
#include "Asoortment.h"
using namespace std;

class Jaz : public Asoortment
{
    string mostPopularPerformer, mostPopularTrack;
    int subscribers;
public:
    Jaz();
    Jaz(string performer, string track, int price, int amountOfLikes, string mostPopularPerformer, string mostPopularTrack, int subscribers);
    ~Jaz(){ countOfProduct--; };
};


#endif
