#include <iostream>

bool czyParzystaBitwise(int liczba) {
    // Przykładowe sprawdzenie:
    // liczba = 4 (binarnie 0100), liczba & 1 = 0 (binarnie 0000) -> liczba jest parzysta
    // liczba = 5 (binarnie 0101), liczba & 1 = 1 (binarnie 0001) -> liczba jest nieparzysta
    return (liczba & 1) == 0;
}

bool czyParzystaModulo(int liczba) {
    return (liczba % 2) == 0;
}

bool czyParzystaTernary(int liczba) {
    return (liczba % 2 == 0) ? true : false;
}

int main() {
    int liczba;
    std::cout << "Podaj liczbę: ";
    std::cin >> liczba;

    std::cout << "Sprawdzenie za pomocą operacji bitowej: " << (czyParzystaBitwise(liczba) ? "parzysta" : "nieparzysta") << std::endl;
    std::cout << "Sprawdzenie za pomocą operatora modulo: " << (czyParzystaModulo(liczba) ? "parzysta" : "nieparzysta") << std::endl;
    std::cout << "Sprawdzenie za pomocą operatora warunkowego: " << (czyParzystaTernary(liczba) ? "parzysta" : "nieparzysta") << std::endl;

    return 0;
}
