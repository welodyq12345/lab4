
#include<iostream>
#include "Client.h"
#include"Asoortment.h"
#include "Employee.h"

using namespace std;
int main(){

    Client Client1(15 , 10000, "Anton");
    Client Client2(20 , 100000 , "sdfsdf");

    Employee Employer1(18 , 100 , "Stas");
    Employee Employer2(19 , 110 , "Anton");



    cout << Client1<< endl;
    cout << Client2 << endl;
    cout << "________________\n\n\n";
    cout << "________________\n\n\n";
    cout << Employer1 <<endl;
    cout << Employer2 << endl;
    cout << "________________\n\n\n";

    cout << "CountOFProducts:" << Asoortment::countOfProducts()<< endl;
    Asoortment Asoostmentcopy1(100 , 200000, "Maksim");
    cout << "CountOFProducts:" << Asoortment::countOfProducts()<< endl;
     const Asoortment Asoostmentcopy2{Asoostmentcopy1};
    cout << "CountOFProducts:" << Asoortment::countOfProducts()<< endl;
    cout << Asoostmentcopy2.show() << endl;
    Asoortment Asoortmentmove1( 333 , 201230 , " Nastya");
    cout << "CountOFProducts:" << Asoortment::countOfProducts()<< endl;
    Asoortment Asoortmentmove2 = move(Asoortmentmove1);
    cout << Asoortmentmove1.show() << endl;
    cout << "CountOFProducts:" << Asoortment::countOfProducts()<< endl;
    cout << Asoortmentmove2.show() << endl;





    const Asoortment Asortment1(100 , 200000 , "Kurt Kobein");
    cout << "CountOFProducts:" << Asoortment::countOfProducts()<< endl;
    cout << Asortment1.show() << endl;
    const Asoortment Asortment2(200 , 300000 , "Kevin Macline");
    cout << "CountOFProducts:" << Asoortment::countOfProducts()<< endl;
    cout << Asortment2.show() <<endl;


    return 0;
};
