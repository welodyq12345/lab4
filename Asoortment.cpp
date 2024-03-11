//
// Created by invokerk1d on 11.03.2024.
//

#include "Asoortment.h"
int Asoortment::countOfProduct = 0;
string Asoortment::show() const {
    return "Performer:" + performer + "\n"
    +"AmountOfLikes:" + to_string(amountOfLikes) + "\n "
    + "Price:" + to_string(price) + "\n";
 }

Asoortment::Asoortment(int price ) {
  this-> price = price;
  countOfProduct++;
};

Asoortment::Asoortment(int price , int amountOfLikes): Asoortment(price){
    this->amountOfLikes = amountOfLikes;
    countOfProduct++;

};
Asoortment::Asoortment(int price , int amountOfLikes, string performer): Asoortment(price, amountOfLikes){
    this->performer = performer;
    countOfProduct++;


};
Asoortment::Asoortment(const Asoortment &other)
    :performer(other.performer),
    amountOfLikes(other.amountOfLikes),
    price(other.price)





{;

    countOfProduct++;
    cout << "Deep copy constructor called\n";
};
Asoortment::Asoortment(Asoortment &&other)
:performer(other.performer),
amountOfLikes(other.amountOfLikes),
price(other.price) {
 other.performer = "";
 other.amountOfLikes = 0;
 other.price = 0;
    countOfProduct++;

    cout << "Move Constructor called\n";
};



