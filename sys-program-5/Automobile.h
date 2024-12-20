#pragma once
#include <string>
#include <iostream>
using namespace std;
class Automobile {
public:
    string brand; 
    string model;   
    int year;      


    
    Automobile(const string& brand, const string& model, int year)
        :brand(brand), model(model), year(year) {

    }
   
    void displayInfo();

    
    string changeBrand();

    };



