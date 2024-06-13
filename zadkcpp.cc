#include <iostream>
#include "ZadKcpp.h"

void wyswietlMenu() {
    std::cout << "Wybierz zadanie do wykonania:\n";
    std::cout << "1. Zadanie 1.1: Funckje ktore zwracaja inaczej\n";
    std::cout << "2. Zadanie 2.1: Operacje na stringu\n";
    std::cout << "3. Zadanie 3.1: Wyswietla  okreslony miesiace\n";
    std::cout << "4. Zadanie 4.1: Tworzy obiekt KviCar\n";
    std::cout << "5. Zadanie 5.1: Obliczanie silni liczby\n";
    std::cout << "0. Wyjscie\n";
}

int main() {
    ZadKcpp zadania;
    int wybor;
    do {
        wyswietlMenu();
        std::cout << "Podaj numer zadania: ";
        std::cin >> wybor;
        switch (wybor) {
            case 1:
                zadania.zadanie1_1();
                break;
            case 2:
                zadania.zadanie2_1();
                break;
            case 3:
                zadania.zadanie3_1();
                break;
            case 4:
                zadania.zadanie4_1();
                break;
            case 5:
                zadania.zadanie5_1();
                break;
            case 0:
                std::cout << "Koniec programu.\n";
                break;
            default:
                std::cout << "Niepoprawny wybór, spróbuj ponownie.\n";
                break;
        }
    } while (wybor != 0);

    return 0;
}
