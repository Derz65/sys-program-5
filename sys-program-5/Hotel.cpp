#include "Hotel.h"
#include <string>
using namespace std;


void Hotel::displayInfo() {
    cout << "��������: " << name << ", �����: " << address << ", ���������� �������: " << kolichestvo << endl;
}


int Hotel::changeKolichestvo() {
    cout << "������� ���������� �������, �� ������� ������ ��������: ";
    cin >> kolichestvo;
    return kolichestvo;
}