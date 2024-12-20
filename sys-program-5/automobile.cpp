#include "Automobile.h"
#include <string>
using namespace std;


void Automobile::displayInfo() {
    cout << "Марка: " << brand << ", модель: " << model << ", год выпуска: " << year << endl;
}


string Automobile::changeBrand() {
    cout << "Введите марку, на которую хотите поменять: ";
    cin >> brand;
    return brand;
}