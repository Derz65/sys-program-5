#include "User.h"
#include <string>
using namespace std;
void User::displayInfo() {
    cout << "���: " << name << ", �������: " << surname << ", �����: " << login << endl;
}


string User::changeLogin() {
    cout << "������� �����, �� ������� ������ ��������: ";
    cin >> login;
    return login;
}
