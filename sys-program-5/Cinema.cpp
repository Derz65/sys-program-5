#include "Cinema.h"
#include <string>
using namespace std;


void Cinema::displayInfo() {
    cout << "��������: " << name << ", �����: " << address << ", ���������� �������: " << kolichestvo << endl;
}


int Cinema::changeKolichestvo() {
    cout << "������� ���������� �������, �� ������� ������ ��������: ";
    cin >> kolichestvo;
    return kolichestvo;
}