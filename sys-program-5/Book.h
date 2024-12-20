#pragma once
#include <string>
#include <iostream>
using namespace std;
class Book
{
public:
    string name;
    string author;
    int year;



    Book(const string& name, const string& author, int year)
        :name(name), author(author), year(year) {

    }

    void displayInfo();


    string changeAuthor();
};

