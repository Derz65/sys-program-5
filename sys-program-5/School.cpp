#include "School.h"
#include <string>
using namespace std;


void School::displayInfo() {
    cout << "Ќазвание: " << name << ", адрес: " << address << ", количество учеников: " << kolichestvo << endl;
}


int School::changeKolichestvo() {
    cout << "¬ведите количество учеников, на который хотите помен€ть: ";
    cin >> kolichestvo;
    return kolichestvo;
}