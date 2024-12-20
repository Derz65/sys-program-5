#include "Aquarium.h"
#include <string>
using namespace std;


void Aquarium::displayInfo() {
    cout << "Ќазвание: " << name << ", адрес: " << address << ", количество рыб: " << kolichestvo << endl;
}


int Aquarium::changeKolichestvo() {
    cout << "¬ведите количество рыб, на которое хотите помен€ть: ";
    cin >> kolichestvo;
    return kolichestvo;
}