#include "Employee.h"
#include <string>
using namespace std;


void Employee::displayInfo() {
    cout << "���: " << name << ", �������: " << surname << ", ���������: " << position << endl;
}


string Employee::changePosition() {
    cout << "������� ���������, �� ������� ������ ��������: ";
    cin >> position;
    return position;
}