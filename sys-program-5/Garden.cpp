#include "Garden.h"
#include <string>
using namespace std;


void Garden::displayInfo() {
    cout << "��������: " << name << ", �����: " << address << ", ���������� ������: " << kolichestvo << endl;
}


int Garden::changeKolichestvo() {
    cout << "������� ���������� ������, �� ������� ������ ��������: ";
    cin >> kolichestvo;
    return kolichestvo;
}