//
// Created by invokerk1d on 11.03.2024.
//

#include "Client.h"
Client::Client(int age, int credit, std::string name) {
    this->age = age;
    this->credit =credit;
    this->name =name;
    cout << "Constructor called\n";
};
Client::~Client() {

    cout<< "Destructor called\n" ;


}

string Client::show() {
    return "name: " +name + "\n"
    +"Age:" + to_string(age) + "\n"
    + "Credit:" + to_string(credit) + "\n";
}

Client::Client() {
  age = 0;
  credit = 0;
  name = "";
};

