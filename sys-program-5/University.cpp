#include "University.h"
#include <string>
using namespace std;


void University::displayInfo() {
    cout << "Ќазвание: " << name << ", адрес: " << address << ", количество студентов: " << kolichestvo << endl;
}


int University::changeKolichestvo() {
    cout << "¬ведите количество студентов, на который хотите помен€ть: ";
    cin >> kolichestvo;
    return kolichestvo;
}