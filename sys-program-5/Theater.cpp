#include "Theater.h"
#include <string>
using namespace std;


void Theater::displayInfo() {
    cout << "Ќазвание: " << name << ", адрес: " << address << ", количество спектаклей: " << kolichestvo << endl;
}


int Theater::changeKolichestvo() {
    cout << "¬ведите количество спектаклей, на который хотите помен€ть: ";
    cin >> kolichestvo;
    return kolichestvo;
}