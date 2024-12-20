#pragma once
#include <string>
#include <iostream>
using namespace std;
class BusStation
{
public:
    string name;
    string address;
    int kolichestvo;


    BusStation(const string& name, const string& address, int kolichestvo)
        : name(name), address(address), kolichestvo(kolichestvo) {

    }

    void displayInfo();
    int changeKolichestvo();
};