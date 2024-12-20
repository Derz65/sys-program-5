#pragma once
#include <string>
#include <iostream>
using namespace std;
class Client
{
public:
    string name;
    string surname;
    string address;

    Client(const string& name, const string& surname, const string& address)
        :name(name), surname(surname), address(address) {

    }

    void displayInfo();
    string changeAddress();
};

