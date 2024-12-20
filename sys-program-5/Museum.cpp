#include "Museum.h"
#include <string>
using namespace std;


void Museum::displayInfo() {
    cout << "Название: " << name << ", адрес: " << address << ", количество экспонатов: " << kolichestvo << endl;
}


int Museum::changeKolichestvo() {
    cout << "Введите количество экспонатов, на который хотите поменять: ";
    cin >> kolichestvo;
    return kolichestvo;
}