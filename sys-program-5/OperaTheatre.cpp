#include "OperaTheatre.h"
#include <string>
using namespace std;


void OperaTheatre::displayInfo() {
    cout << "Ќазвание: " << name << ", адрес: " << address << ", количество спектаклей: " << kolichestvo << endl;
}


int OperaTheatre::changeKolichestvo() {
    cout << "¬ведите количество спектаклей, на которое хотите помен€ть: ";
    cin >> kolichestvo;
    return kolichestvo;
}