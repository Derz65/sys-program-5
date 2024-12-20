#include "Client.h"
#include <string>
using namespace std;


void Client::displayInfo() {
    cout << "»м€: " << name << ", фамили€: " << surname << ", адрес: " << address << endl;
}


string Client::changeAddress() {
    cout << "¬ведите адрес, на который хотите помен€ть: ";
    cin >> address;
    return address;
}
