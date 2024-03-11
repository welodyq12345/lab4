
#include<iostream>
#include "Client.h"
#include"Asoortment.h"
#include "Employee.h"

using namespace std;
int main(){

    Client Client1(15 , 10000, "Anton");
    Client Client2(20 , 100000 , "sdfsdf");
    Asoortment Asortment1(100 , 200000 , "Kurt Kobein");
    Asoortment Asortment2(200 , 300000 , "Kevin Macline");
    Employee Employer1(18 , 100 , "Stas");
    Employee Employer2(19 , 110 , "Anton");



    cout << Client1.show()<< endl;
    cout << Client2.show() << endl;
    cout << "________________\n\n\n";
    cout << Asortment1.show() << endl;
    cout << Asortment2.show() <<endl;
    cout << "________________\n\n\n";
    cout << Employer1.show() <<endl;
    cout << Employer2.show() << endl;





    return 0;
};
