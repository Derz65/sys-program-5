#include "Teacher.h"

#include <string>
using namespace std;


void Teacher::displayInfo() {
    cout << "���: " << name << ", �������: " << surname << ", �������: " << predmet << endl;
}


string Teacher::changePredmet() {
    cout << "������� �������, �� ������� ������ ��������: ";
    cin >> predmet;
    return predmet;
}