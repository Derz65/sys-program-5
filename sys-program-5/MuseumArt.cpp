#include "MuseumArt.h"
#include <string>
using namespace std;


void MuseumArt::displayInfo() {
    cout << "��������: " << name << ", �����: " << address << ", ���������� ����������: " << kolichestvo << endl;
}


int MuseumArt::changeKolichestvo() {
    cout << "������� ���������� ����������, �� ������� ������ ��������: ";
    cin >> kolichestvo;
    return kolichestvo;
}