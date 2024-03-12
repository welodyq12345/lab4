#include "Jaz.h"
Jaz::Jaz()
    : Jaz{"", "", 0, 0, "", "", 0}{};

Jaz::Jaz(string performer, string track, int price, int amountOfLikes, string mostPopularPerformer, string mostPopularTrack, int subscribers)
    : Asoortment(performer, track, price, amountOfLikes),
    mostPopularPerformer(mostPopularPerformer),
    mostPopularTrack(mostPopularTrack),
    subscribers(subscribers)
    { countOfProduct++; }