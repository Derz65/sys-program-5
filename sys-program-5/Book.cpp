#include "Book.h"
#include <string>
using namespace std;


void Book::displayInfo() {
    cout << "Название: " << name << ", автор: " << author << ", год издания: " << year << endl;
}


string Book::changeAuthor() {
    cout << "Введите имя автора, на котого хотите поменять: ";
    cin >> author;
    return author;
}