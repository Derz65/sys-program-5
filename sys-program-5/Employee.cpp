#include "Employee.h"
#include <string>
using namespace std;


void Employee::displayInfo() {
    cout << "Имя: " << name << ", фамилия: " << surname << ", должность: " << position << endl;
}


string Employee::changePosition() {
    cout << "Введите должность, на которую хотите поменять: ";
    cin >> position;
    return position;
}