#include "RailwayStation.h"
#include <string>
using namespace std;


void RailwayStation::displayInfo() {
    cout << "Ќазвание: " << name << ", адрес: " << address << ", количество поездов: " << kolichestvo << endl;
}


int RailwayStation::changeKolichestvo() {
    cout << "¬ведите количество поездов, на который хотите помен€ть: ";
    cin >> kolichestvo;
    return kolichestvo;
}