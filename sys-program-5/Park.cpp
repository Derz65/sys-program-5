#include "Park.h"
#include <string>
using namespace std;


void Park::displayInfo() {
    cout << "Ќазвание: " << name << ", адрес: " << address << ",  деревьев количество : " << kolichestvo << endl;
}


int Park::changeKolichestvo() {
    cout << "¬ведите количество деревьев, на который хотите помен€ть: ";
    cin >> kolichestvo;
    return kolichestvo;
}