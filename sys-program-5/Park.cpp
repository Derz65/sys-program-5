#include "Park.h"
#include <string>
using namespace std;


void Park::displayInfo() {
    cout << "��������: " << name << ", �����: " << address << ",  �������� ���������� : " << kolichestvo << endl;
}


int Park::changeKolichestvo() {
    cout << "������� ���������� ��������, �� ������� ������ ��������: ";
    cin >> kolichestvo;
    return kolichestvo;
}