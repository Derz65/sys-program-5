#include "Student.h"
#include <string>
using namespace std;


void Student::displayInfo() {
    cout << "���: " << name << ", �������: " << surname << ", �������: " << age << endl;
}


int Student::changeAge() {
    cout << "������� �������, �� ������� ������ ��������: ";
    cin >> age;
    return age;
}