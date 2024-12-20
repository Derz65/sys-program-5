#include "Goods.h"
#include <string>
using namespace std;


void Goods::displayInfo() {
    cout << "Название: " << name << ", Цена: " << price << ", Количество: " << kolich << endl;
}


double Goods::changePrice() {
    cout << "Введите цену, на которую хотите поменять: ";
    cin >> price;
    return price;
}