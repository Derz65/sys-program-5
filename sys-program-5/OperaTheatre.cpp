#include "OperaTheatre.h"
#include <string>
using namespace std;


void OperaTheatre::displayInfo() {
    cout << "��������: " << name << ", �����: " << address << ", ���������� ����������: " << kolichestvo << endl;
}


int OperaTheatre::changeKolichestvo() {
    cout << "������� ���������� ����������, �� ������� ������ ��������: ";
    cin >> kolichestvo;
    return kolichestvo;
}