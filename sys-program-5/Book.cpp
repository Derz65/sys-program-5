#include "Book.h"
#include <string>
using namespace std;


void Book::displayInfo() {
    cout << "��������: " << name << ", �����: " << author << ", ��� �������: " << year << endl;
}


string Book::changeAuthor() {
    cout << "������� ��� ������, �� ������ ������ ��������: ";
    cin >> author;
    return author;
}