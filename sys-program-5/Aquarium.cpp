#include "Aquarium.h"
#include <string>
using namespace std;


void Aquarium::displayInfo() {
    cout << "��������: " << name << ", �����: " << address << ", ���������� ���: " << kolichestvo << endl;
}


int Aquarium::changeKolichestvo() {
    cout << "������� ���������� ���, �� ������� ������ ��������: ";
    cin >> kolichestvo;
    return kolichestvo;
}