#include "Airport.h"
#include <string>
using namespace std;


void Airport::displayInfo() {
    cout << "Ќазвание: " << name << ", адрес: " << address << ", количество рейсов: " << kolichestvo << endl;
}


int Airport::changeKolichestvo() {
    cout << "¬ведите количество рейсов, на которое хотите помен€ть: ";
    cin >> kolichestvo;
    return kolichestvo;
}