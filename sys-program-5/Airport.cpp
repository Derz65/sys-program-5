#include "Airport.h"
#include <string>
using namespace std;


void Airport::displayInfo() {
    cout << "��������: " << name << ", �����: " << address << ", ���������� ������: " << kolichestvo << endl;
}


int Airport::changeKolichestvo() {
    cout << "������� ���������� ������, �� ������� ������ ��������: ";
    cin >> kolichestvo;
    return kolichestvo;
}