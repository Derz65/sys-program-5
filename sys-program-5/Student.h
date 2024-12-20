#pragma once
#include <string>
#include <iostream>
using namespace std;
class Student {
public:
    string name;
    string surname;
    int age;

    Student(const string& name, const string& surname, const int age)
        :name(name), surname(surname), age(age) {

    }

    void displayInfo();
    int changeAge();

};

