#include "Rock.h"

ostream &operator << (ostream &os, Rock &obj)
{
    return os << "Performer: " << obj.performer << endl
              << "Track: " << obj.track << endl
              << "Price: $" << obj.price << endl
              << "Amount of Likes: " << obj.amountOfLikes << endl
              << "First performer: " << obj.firstPerformer << endl
              << "First track: " << obj.firstTrack << endl;
};

Rock::Rock()
    : Rock("", "", 0, 0, "", "")
    { countOfProduct++; };

Rock::Rock(string performer, string track, int price, int amountOfLikes, string firstPerformer, string firstTrack)
    : Asoortment(performer, track, price, amountOfLikes), firstPerformer(firstPerformer), firstTrack(firstTrack)
    { countOfProduct++; }

Rock &Rock::operator=(const Rock &obj) {
    if (this != &obj) {
        Asoortment::operator=(obj);
        firstPerformer = obj.firstPerformer;
        firstTrack = obj.firstTrack;
    }
    return *this;
}