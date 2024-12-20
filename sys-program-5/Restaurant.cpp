#include "Restaurant.h"
#include <string>
using namespace std;


void Restaurant::displayInfo() {
    cout << "Ќазвание: " << name << ", адрес: " << address << ", количество блюд: " << kolichestvo << endl;
}


int Restaurant::changeKolichestvo() {
    cout << "¬ведите количество блюд, на который хотите помен€ть: ";
    cin >> kolichestvo;
    return kolichestvo;
}