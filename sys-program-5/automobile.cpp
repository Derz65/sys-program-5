#include "Automobile.h"
#include <string>
using namespace std;


void Automobile::displayInfo() {
    cout << "�����: " << brand << ", ������: " << model << ", ��� �������: " << year << endl;
}


string Automobile::changeBrand() {
    cout << "������� �����, �� ������� ������ ��������: ";
    cin >> brand;
    return brand;
}