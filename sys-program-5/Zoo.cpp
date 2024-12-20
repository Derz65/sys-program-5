#include "Zoo.h"
#include <string>
using namespace std;


void Zoo::displayInfo() {
    cout << "Ќазвание: " << name << ", адрес: " << address << ", количество животных: " << kolichestvo << endl;
}


int Zoo::changeKolichestvo() {
    cout << "¬ведите количество животных, на который хотите помен€ть: ";
    cin >> kolichestvo;
    return kolichestvo;
}