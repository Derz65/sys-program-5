#pragma once
#include <string>
#include <iostream>
using namespace std;
class Teacher
{
public:
    string name;
    string surname;
    string predmet;

    Teacher(const string& name, const string& surname, const string& predmet)
        :name(name), surname(surname), predmet(predmet) {

    }

    void displayInfo();
    string changePredmet();
};


