#include "Museum.h"
#include <string>
using namespace std;


void Museum::displayInfo() {
    cout << "��������: " << name << ", �����: " << address << ", ���������� ����������: " << kolichestvo << endl;
}


int Museum::changeKolichestvo() {
    cout << "������� ���������� ����������, �� ������� ������ ��������: ";
    cin >> kolichestvo;
    return kolichestvo;
}