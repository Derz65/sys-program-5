#include "School.h"
#include <string>
using namespace std;


void School::displayInfo() {
    cout << "��������: " << name << ", �����: " << address << ", ���������� ��������: " << kolichestvo << endl;
}


int School::changeKolichestvo() {
    cout << "������� ���������� ��������, �� ������� ������ ��������: ";
    cin >> kolichestvo;
    return kolichestvo;
}