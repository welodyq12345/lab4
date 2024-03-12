
#include<iostream>
#include "classes/Client.h"
#include"classes/Jaz.h"
#include"classes/Rock.h"
#include "classes/Employee.h"

using namespace std;
int main(){

    Client Client1(18 , 10000, "Anton");
    Client Client2(20 , 100000 , "Lyoha");

    Employee Employer1(18 , 10000 , "Stas");
    Employee Employer2(19 , 11000 , "Anton");


    cout << "____Clents______\n\n\n";
    cout << Client1<< endl;
    cout << Client2 << endl;
    cout << "_____Employers______\n\n\n";
    cout << Employer1 <<endl;
    cout << Employer2 << endl;
    cout << "______Product_____\n\n\n";

    return 0;
};
