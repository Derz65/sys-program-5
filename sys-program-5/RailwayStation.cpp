#include "RailwayStation.h"
#include <string>
using namespace std;


void RailwayStation::displayInfo() {
    cout << "��������: " << name << ", �����: " << address << ", ���������� �������: " << kolichestvo << endl;
}


int RailwayStation::changeKolichestvo() {
    cout << "������� ���������� �������, �� ������� ������ ��������: ";
    cin >> kolichestvo;
    return kolichestvo;
}