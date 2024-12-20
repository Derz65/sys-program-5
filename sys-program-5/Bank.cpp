#include "Bank.h"
#include <string>
using namespace std;


void Bank::displayInfo() {
    cout << "Ќазвание: " << name <<  ", адрес: " << address <<", количество студентов: "<<kolichestvo << endl;
}


int Bank::changeKolichestvo() {
    cout << "¬ведите количество клиентов, на который хотите помен€ть: ";
    cin >> kolichestvo;
    return kolichestvo;
}