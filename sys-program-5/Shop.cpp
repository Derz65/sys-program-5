#include "Shop.h"
#include <string>
using namespace std;


void Shop::displayInfo() {
    cout << "��������: " << name << ", �����: " << address << ", ���������� ���������: " << kolichestvo << endl;
}


int Shop::changeKolichestvo() {
    cout << "������� ���������� ���������, �� ������� ������ ��������: ";
    cin >> kolichestvo;
    return kolichestvo;
}