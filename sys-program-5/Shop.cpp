#include "Shop.h"
#include <string>
using namespace std;


void Shop::displayInfo() {
    cout << "Ќазвание: " << name << ", адрес: " << address << ", количество продуктов: " << kolichestvo << endl;
}


int Shop::changeKolichestvo() {
    cout << "¬ведите количество продуктов, на который хотите помен€ть: ";
    cin >> kolichestvo;
    return kolichestvo;
}