#include "Bank.h"
#include <string>
using namespace std;


void Bank::displayInfo() {
    cout << "��������: " << name <<  ", �����: " << address <<", ���������� ���������: "<<kolichestvo << endl;
}


int Bank::changeKolichestvo() {
    cout << "������� ���������� ��������, �� ������� ������ ��������: ";
    cin >> kolichestvo;
    return kolichestvo;
}