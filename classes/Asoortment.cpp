#include "Asoortment.h"
int Asoortment::countOfProduct = 0;

Asoortment::Asoortment()
    : Asoortment{"", "", 0, 0} {}

Asoortment::Asoortment(string performer, string track, int price, int amountOfLikes)
    : performer(performer), track(track), price(price), amountOfLikes(amountOfLikes) { countOfProduct++; };

Asoortment &Asoortment::operator=(const Asoortment &obj){
    if (this != &obj)
    {
        performer = obj.performer;
        track = obj.track;
        price = obj.price;
        amountOfLikes = obj.amountOfLikes;
    }
    return *this;
}