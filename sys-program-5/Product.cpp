#include "Product.h"
#include <string>
using namespace std;


void Product::displayInfo() {
    cout << "��������: " << name << ", ����: " << price << ", ����������: " << kolich << endl;
}


double Product::changePrice() {
    cout << "������� ����, �� ������� ������ ��������: ";
    cin >> price;
    return price;
}