#include "University.h"
#include <string>
using namespace std;


void University::displayInfo() {
    cout << "��������: " << name << ", �����: " << address << ", ���������� ���������: " << kolichestvo << endl;
}


int University::changeKolichestvo() {
    cout << "������� ���������� ���������, �� ������� ������ ��������: ";
    cin >> kolichestvo;
    return kolichestvo;
}