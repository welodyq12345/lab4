#include "Asoortment.h"
int Asoortment::countOfProduct = 0;

Asoortment::Asoortment()
    : Asoortment{"", "", 0, 0} {}

Asoortment::Asoortment(string performer, string track, int price, int amountOfLikes)
    : performer(performer), track(track), price(price), amountOfLikes(amountOfLikes) { countOfProduct++; };
