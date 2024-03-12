#include "Jaz.h"

ostream &operator << (ostream &os, Jaz &obj)
{
    return os << "Performer: " << obj.performer << endl
              << "Track: " << obj.track << endl
              << "Price: $" << obj.price << endl
              << "Amount of Likes: " << obj.amountOfLikes << endl
              << "Most popul. performer: " << obj.mostPopularPerformer << endl
              << "Most popul. track: " << obj.mostPopularTrack << endl
              << "Subscribers: " << obj.subscribers << endl;
};

Jaz::Jaz()
    : Jaz{"", "", 0, 0, "", "", 0}
    { countOfProduct++; };

Jaz::Jaz(string performer, string track, int price, int amountOfLikes, string mostPopularPerformer, string mostPopularTrack, int subscribers)
    : Asoortment(performer, track, price, amountOfLikes),
    mostPopularPerformer(mostPopularPerformer),
    mostPopularTrack(mostPopularTrack),
    subscribers(subscribers)
    { countOfProduct++; }