#include "BusStation.h"
#include <string>
using namespace std;


void BusStation::displayInfo() {
    cout << "��������: " << name << ", �����: " << address << ", ���������� ���������: " << kolichestvo << endl;
}


int BusStation::changeKolichestvo() {
    cout << "������� ���������� ���������, �� ������� ������ ��������: ";
    cin >> kolichestvo;
    return kolichestvo;
}