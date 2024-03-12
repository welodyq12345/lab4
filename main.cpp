#include<iostream>
#include "classes/Client.h"
#include"classes/Jaz.h"
#include"classes/Rock.h"
#include "classes/Employee.h"

using namespace std;
int main(){


    Client Client1("Stasik", 18, 500, "+380 98 555 5555");
    Client Client2("Maksym Koka", 25, 1500, "+380 98 555 5555");
    Client Client3("Nastya", 20, 5500, "+380 98 555 5555");
    Client Client4 = move(Client3);
    cout << Client1 << endl << endl << Client2 << endl << endl << Client3 << endl << endl << Client4 << endl;

    cout << "___________________________________" << endl;

    Employee Employer1("Fedia", 15, 2000, "01.07.2005", "France", 2);
    Employee Employer2("Vitaliy", 55, 10, "15.02.1978", "Germany", 5);
    Employee Employer3{Employer2};
    cout << Employer1 << endl << endl << Employer2 << endl << endl << Employer3 << endl;

    cout << "___________________________________" << endl;

    Jaz JazObj1("Crazy Baizy", "I've alone", 1, 0, "Sxfczxc", "ssdfjvbhfd", 555);
    Jaz JazObj2("Baba Yagha", "Preaty life", 1, 0, "Sxfczxc", "ssdfjvbhfd", 555);
    cout << JazObj1 << endl << endl << JazObj2 << endl;

    cout << "___________________________________" << endl;

    Rock RockObj("Lil g", "dfvdf", 15000, 6550, "Danya", "Ok");
    cout << RockObj << endl;

    //Finish
    return 0;
};
