#pragma once
#include <string>
#include <iostream>
using namespace std;
class User
{
public:
    string name;
    string surname;
    string login;

    User(const string& name, const string& surname, const string& login)
        :name(name), surname(surname), login(login) {

    }

    void displayInfo();
    string changeLogin();
};

