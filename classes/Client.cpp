//
// Created by invokerk1d on 11.03.2024.
//

#include "Client.h"
ostream &operator << (ostream &os, Client &obj){
    return os << "Name :"  << obj.name <<  "\n"
              <<  "Credit:" << obj.credit  << "\n"  <<
              "Age:"  << obj.age  <<  "\n";

};
istream &operator >> (istream &is, Client &obj){;
    return is >> obj.name >> obj.age >> obj.credit ;
}
Client::Client(int age, int credit, std::string name) {
    this->age = age;
    this->credit =credit;
    this->name =name;
    cout << "Constructor called\n";
};
Client::~Client() {

    cout<< "Destructor called\n" ;


}



Client::Client() {
  age = 0;
  credit = 0;
  name = "";
};

