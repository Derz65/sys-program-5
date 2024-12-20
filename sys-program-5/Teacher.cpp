#include "Teacher.h"

#include <string>
using namespace std;


void Teacher::displayInfo() {
    cout << "Имя: " << name << ", фамилия: " << surname << ", предмет: " << predmet << endl;
}


string Teacher::changePredmet() {
    cout << "Введите предмет, на который хотите поменять: ";
    cin >> predmet;
    return predmet;
}