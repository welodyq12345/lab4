//
// Created by invokerk1d on 11.03.2024.
//

#include "Asoortment.h"
string Asoortment::show() const {
    return "Performer:" + performer + "\n"
    +"AmountOfLikes:" + to_string(amountOfLikes) + "\n "
    + "Price:" + to_string(price) + "\n";
 }

Asoortment::Asoortment(int price) {
  this-> price = price;
};

Asoortment::Asoortment(int price , int amountOfLikes): Asoortment(price){
    this->amountOfLikes = amountOfLikes;

};
Asoortment::Asoortment(int price , int amountOfLikes, string performer): Asoortment(price, amountOfLikes){
    this->performer = performer;


};
Asoortment::Asoortment(const Asoortment &other)
    :performer(other.performer),
    amountOfLikes(other.amountOfLikes),
    price(other.price)




{;


    cout << "Deep copy constructor called\n";
};
Asoortment::Asoortment(Asoortment &&other)
:performer(other.performer),
amountOfLikes(other.amountOfLikes),
price(other.price) {
 performer = "";
 amountOfLikes = 0;
 price = 0;

    cout << "Move Constructor called\n";
};



