#include "Cinema.h"
#include <string>
using namespace std;


void Cinema::displayInfo() {
    cout << "Ќазвание: " << name << ", адрес: " << address << ", количество фильмов: " << kolichestvo << endl;
}


int Cinema::changeKolichestvo() {
    cout << "¬ведите количество фильмов, на который хотите помен€ть: ";
    cin >> kolichestvo;
    return kolichestvo;
}