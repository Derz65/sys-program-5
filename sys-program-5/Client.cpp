#include "Client.h"
#include <string>
using namespace std;


void Client::displayInfo() {
    cout << "���: " << name << ", �������: " << surname << ", �����: " << address << endl;
}


string Client::changeAddress() {
    cout << "������� �����, �� ������� ������ ��������: ";
    cin >> address;
    return address;
}
