#pragma once
#include <string>
#include <iostream>
using namespace std;
class Employee
{
public:
    string name;
    string surname;
    string position;

    Employee(const string& name, const string& surname, const string& position)
        :name(name), surname(surname), position(position) {

    }

    void displayInfo();
    string changePosition();
};

