#include "User.h"
#include <string>
using namespace std;
void User::displayInfo() {
    cout << "»м€: " << name << ", фамили€: " << surname << ", логин: " << login << endl;
}


string User::changeLogin() {
    cout << "¬ведите логин, на который хотите помен€ть: ";
    cin >> login;
    return login;
}
