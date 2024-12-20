#include "Hotel.h"
#include <string>
using namespace std;


void Hotel::displayInfo() {
    cout << "Ќазвание: " << name << ", адрес: " << address << ", количество номеров: " << kolichestvo << endl;
}


int Hotel::changeKolichestvo() {
    cout << "¬ведите количество номеров, на который хотите помен€ть: ";
    cin >> kolichestvo;
    return kolichestvo;
}