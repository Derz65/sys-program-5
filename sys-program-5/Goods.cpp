#include "Goods.h"
#include <string>
using namespace std;


void Goods::displayInfo() {
    cout << "��������: " << name << ", ����: " << price << ", ����������: " << kolich << endl;
}


double Goods::changePrice() {
    cout << "������� ����, �� ������� ������ ��������: ";
    cin >> price;
    return price;
}