#include "Library.h"
#include <string>
using namespace std;


void Library::displayInfo() {
    cout << "��������: " << name << ", �����: " << address << ", ���������� ����: " << kolichestvo << endl;
}


int Library::changeKolichestvo() {
    cout << "������� ���������� ����, �� ������� ������ ��������: ";
    cin >> kolichestvo;
    return kolichestvo;
}