#include "Library.h"
#include <string>
using namespace std;


void Library::displayInfo() {
    cout << "Ќазвание: " << name << ", адрес: " << address << ", количество книг: " << kolichestvo << endl;
}


int Library::changeKolichestvo() {
    cout << "¬ведите количество книг, на который хотите помен€ть: ";
    cin >> kolichestvo;
    return kolichestvo;
}