#pragma once
#include <string>
#include <iostream>
using namespace std;
class Aquarium
{
public:
    string name;
    string address;
    int kolichestvo;


    Aquarium(const string& name, const string& address, int kolichestvo)
        : name(name), address(address), kolichestvo(kolichestvo) {

    }

    void displayInfo();
    int changeKolichestvo();
};
