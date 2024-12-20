#include <iostream>
#include <string>
#include "Automobile.h"
#include "Student.h"
#include "Product.h"
#include "Employee.h"
#include "Book.h"
#include "User.h"
#include "Goods.h"
#include "Teacher.h"
#include "Client.h"
#include "Bank.h"
#include "Zoo.h"
#include "Theater.h"
#include "University.h"
#include "School.h"
#include "Restaurant.h"
#include "RailwayStation.h"
#include "Park.h"
#include "MuseumArt.h"
#include "Museum.h"
#include "Hotel.h"
#include "Garden.h"
#include "Cinema.h"
#include "Cafe.h"
#include "BusStation.h"
#include "Aquarium.h"
#include "Airport.h"
#include "Shop.h"
#include "Library.h"
#include "OperaTheatre.h"
using namespace std;

int main() {
    setlocale(LC_ALL, "RU"); 
    int zad;
    while (true) {
        cout << "Введите номер задания: ";
        cin >> zad;
        switch (zad) {
        case 1: {
            Automobile car("Toyota", "Camry", 2020);
            car.displayInfo();
            car.changeBrand();
            car.displayInfo();
            break;  
        }
        case 2: {
            Student student("Artem", "Gavrilin", 15);
            student.displayInfo();
            student.changeAge();
            student.displayInfo();
            break;
        }
        case 3: {
            Product prodect("Hleb", 80.20, 15);
            prodect.displayInfo();
            prodect.changePrice();
            prodect.displayInfo();
            break;
        }
        case 4: {
            Employee employee("Anton", "Pupin", "Krutoi");
            employee.displayInfo();
            employee.changePosition();
            employee.displayInfo();
            break;
        }
        case 5: {
            Book book("Moja borba", "Ilja", 1939);
            book.displayInfo();
            book.changeAuthor();
            book.displayInfo();
            break;
        }
        case 6: {
            Automobile car2("BMW", "M5", 2029);
            car2.displayInfo();
            car2.changeBrand();
            car2.displayInfo();
            break;
        }
        case 7: {
            User user("Anton", "Pupin", "Anton777");
            user.displayInfo();
            user.changeLogin();
            user.displayInfo();
            break;
        }
        case 8: {
            Goods goods("Sosiski", 120, 10);
            goods.displayInfo();
            goods.changePrice();
            goods.displayInfo();
            break;
        }
        case 9: {
            Teacher teacher("Albert", "Sule", "Fiz-ra");
            teacher.displayInfo();
            teacher.changePredmet();
            teacher.displayInfo();
            break;
        }
        case 10: {
            Client client("Feder", "Ovsjankin", "Donsky");
            client.displayInfo();
            client.changeAddress();
            client.displayInfo();
            break;
        }
        case 11: {
            Shop shop("Magnit", "Tula", 32133);
            shop.displayInfo();
            shop.changeKolichestvo();
            shop.displayInfo();
            break;
        }
        case 12: {
            Bank bank("Sber", "Tula", 13);
            bank.displayInfo();
            bank.changeKolichestvo();
            bank.displayInfo();
            
            break;
        }
        case 13: {
            University uiversity("pupa", "Kaluga",123 );
            uiversity.displayInfo();
            uiversity.changeKolichestvo();
            uiversity.displayInfo();
            break;
        }
        case 14: {
            School school("1", "Efremov", 125);
            school.displayInfo();
            school.changeKolichestvo();
            school.displayInfo();
            break;
        }
        case 15: {
            Library library ("lupa", "Bogorodik", 312);
            library.displayInfo();
            library.changeKolichestvo();
            library.displayInfo();
            break;
        }
        case 16: {
            Restaurant restaurant("Ivanzolo", "Donskoy",213 );
            restaurant.displayInfo();
            restaurant.changeKolichestvo();
            restaurant.displayInfo();
            break;
        }
        case 17: {
            Museum museum("pampam", "Rostov", 323);
            museum.displayInfo();
            museum.changeKolichestvo();
            museum.displayInfo();
            break;
        }
        case 18: {
            Cinema cinema("zolo", "Donskoy",3123 );
            cinema.displayInfo();
            cinema.changeKolichestvo();
            cinema.displayInfo();
            break;
        }
        case 19: {
            Theater theayer("biba", "Donskoy",765 );
            theayer.displayInfo();
            theayer.changeKolichestvo();
            theayer.displayInfo();
            break;
        }
        case 20: {
            Cafe cafe("kika", "Donskoy",312);
            cafe.displayInfo();
            cafe.changeKolichestvo();
            cafe.displayInfo();
            break;
        }
        case 21: {
            Hotel hotel("plazma", "Donskoy", 123);
            hotel.displayInfo();
            hotel.changeKolichestvo();
            hotel.displayInfo();
            break;
        }
        case 22: {
            Airport airport("911", "Donskoy", 6);
            airport.displayInfo();
            airport.changeKolichestvo();
            airport.displayInfo();
            break;
        }
        case 23: {
            RailwayStation railwayStation("zhd", "Donskoy", 2);
            railwayStation.displayInfo();
            railwayStation.changeKolichestvo();
            railwayStation.displayInfo();
            break;
        }
        case 24: {
            BusStation busStation("Irbis", "Donskoy", 412);
            busStation.displayInfo();
            busStation.changeKolichestvo();
            busStation.displayInfo();
            break;
        }
        case 25: {
            Park park("Komsomolskiy", "Donskoy", 23);
            park.displayInfo();
            park.changeKolichestvo();
            park.displayInfo();
            break;
        }
        case 26: {
            Garden garden("a4", "Donskoy", 321);
            garden.displayInfo();
            garden.changeKolichestvo();
            garden.displayInfo();
            break;
        }
        case 27: {
            Zoo zoo("Bobr", "Donskoy", 12);
            zoo.displayInfo();
            zoo.changeKolichestvo();
            zoo.displayInfo();
            break;
        }
        case 28: {
            Aquarium aquarium("riba", "Donskoy", 123);
            aquarium.displayInfo();
            aquarium.changeKolichestvo();
            aquarium.displayInfo();
            break;
        }
        case 29: {
            MuseumArt museumArt("art", "Donskoy",867 );
            museumArt.displayInfo();
            museumArt.changeKolichestvo();
            museumArt.displayInfo();
            break;
        }
        case 30: {
        OperaTheatre operaTheatre("Mazzelov", "Donskoy",123 );
        operaTheatre.displayInfo();
        operaTheatre.changeKolichestvo();
        operaTheatre.displayInfo();
            break;
        }
        default:
            cout << "Неверный номер задания." << endl;
            break;
        }
    }
    
}
