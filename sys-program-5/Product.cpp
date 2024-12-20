#include "Product.h"
#include <string>
using namespace std;


void Product::displayInfo() {
    cout << "Название: " << name << ", Цена: " << price << ", Количество: " << kolich << endl;
}


double Product::changePrice() {
    cout << "Введите цену, на которую хотите поменять: ";
    cin >> price;
    return price;
}