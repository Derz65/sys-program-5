#include "Restaurant.h"
#include <string>
using namespace std;


void Restaurant::displayInfo() {
    cout << "��������: " << name << ", �����: " << address << ", ���������� ����: " << kolichestvo << endl;
}


int Restaurant::changeKolichestvo() {
    cout << "������� ���������� ����, �� ������� ������ ��������: ";
    cin >> kolichestvo;
    return kolichestvo;
}