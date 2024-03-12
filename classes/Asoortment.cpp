#include "Asoortment.h"
int Asoortment::countOfProduct = 0;

Asoortment::Asoortment()
    : Asoortment{"", "", 0, 0} {}

Asoortment::Asoortment(string performer, string track, int price, int amountOfLikes)
    : performer(performer), track(track), price(price), amountOfLikes(amountOfLikes) { countOfProduct++; };

Asoortment::Asoortment(const Asoortment &other)
    : performer(other.performer), track(other.track), amountOfLikes(other.amountOfLikes), price(other.price) { countOfProduct++; };

Asoortment::Asoortment(Asoortment &&other)
    : performer(other.performer), track(other.track), amountOfLikes(other.amountOfLikes), price(other.price)
{
    other.performer = "";
    other.track = "";
    other.amountOfLikes = 0;
    other.price = 0;

    countOfProduct++;
};



