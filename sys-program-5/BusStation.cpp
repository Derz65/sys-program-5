#include "BusStation.h"
#include <string>
using namespace std;


void BusStation::displayInfo() {
    cout << "Ќазвание: " << name << ", адрес: " << address << ", количество автобусов: " << kolichestvo << endl;
}


int BusStation::changeKolichestvo() {
    cout << "¬ведите количество автобусов, на который хотите помен€ть: ";
    cin >> kolichestvo;
    return kolichestvo;
}