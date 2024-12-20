#include "Cafe.h"
#include <string>
using namespace std;


void Cafe::displayInfo() {
    cout << "Ќазвание: " << name << ", адрес: " << address << ", количество напитков: " << kolichestvo << endl;
}


int Cafe::changeKolichestvo() {
    cout << "¬ведите количество напитков, на который хотите помен€ть: ";
    cin >> kolichestvo;
    return kolichestvo;
}