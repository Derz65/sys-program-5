#include "MuseumArt.h"
#include <string>
using namespace std;


void MuseumArt::displayInfo() {
    cout << "Название: " << name << ", адрес: " << address << ", количество экспонатов: " << kolichestvo << endl;
}


int MuseumArt::changeKolichestvo() {
    cout << "Введите количество экспонатов, на который хотите поменять: ";
    cin >> kolichestvo;
    return kolichestvo;
}