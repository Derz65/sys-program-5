#include "Cafe.h"
#include <string>
using namespace std;


void Cafe::displayInfo() {
    cout << "��������: " << name << ", �����: " << address << ", ���������� ��������: " << kolichestvo << endl;
}


int Cafe::changeKolichestvo() {
    cout << "������� ���������� ��������, �� ������� ������ ��������: ";
    cin >> kolichestvo;
    return kolichestvo;
}