#include "Zoo.h"
#include <string>
using namespace std;


void Zoo::displayInfo() {
    cout << "��������: " << name << ", �����: " << address << ", ���������� ��������: " << kolichestvo << endl;
}


int Zoo::changeKolichestvo() {
    cout << "������� ���������� ��������, �� ������� ������ ��������: ";
    cin >> kolichestvo;
    return kolichestvo;
}