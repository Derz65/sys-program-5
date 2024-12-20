#pragma once
#include <string>
#include <iostream>
using namespace std;
class Goods
{
public:
    string name;
    double price;
    int kolich;



    Goods(const string& name, const double price, int kolich)
        :name(name), price(price), kolich(kolich) {

    }

    void displayInfo();


    double changePrice();
};
