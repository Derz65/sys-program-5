#include "Theater.h"
#include <string>
using namespace std;


void Theater::displayInfo() {
    cout << "��������: " << name << ", �����: " << address << ", ���������� ����������: " << kolichestvo << endl;
}


int Theater::changeKolichestvo() {
    cout << "������� ���������� ����������, �� ������� ������ ��������: ";
    cin >> kolichestvo;
    return kolichestvo;
}