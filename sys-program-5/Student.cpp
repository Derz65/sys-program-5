#include "Student.h"
#include <string>
using namespace std;


void Student::displayInfo() {
    cout << "Имя: " << name << ", фамилия: " << surname << ", Возраст: " << age << endl;
}


int Student::changeAge() {
    cout << "Введите возраст, на который хотите поменять: ";
    cin >> age;
    return age;
}