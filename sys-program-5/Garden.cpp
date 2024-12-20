#include "Garden.h"
#include <string>
using namespace std;


void Garden::displayInfo() {
    cout << "Название: " << name << ", адрес: " << address << ", количество цветов: " << kolichestvo << endl;
}


int Garden::changeKolichestvo() {
    cout << "Введите количество цветов, на который хотите поменять: ";
    cin >> kolichestvo;
    return kolichestvo;
}