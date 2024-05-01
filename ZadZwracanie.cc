#include <iostream>

int PrzezWartosc(int x) {
    return x + 1;
}

void PrzezReferencje(int x, int &wynik) {
    wynik = x + 1;
}

void PrzezWskaznik(int x, int *wynik) {
    *wynik = x + 1;
}

void PrzezTablice(int x, int wynik[]) {
    wynik[0] = x + 1;
}

int main() {
    int liczba = 3;
    int wynik;

    wynik = PrzezWartosc(liczba);
    std::cout << "Wynik przez wartosc: " << wynik << std::endl;

    PrzezReferencje(liczba, wynik);
    std::cout << "Wynik przez referencje: " << wynik << std::endl;

    PrzezWskaznik(liczba, &wynik);
    std::cout << "Wynik przez wskaznik: " << wynik << std::endl;

    int wynikTablica[1];
    PrzezTablice(liczba, wynikTablica);
    std::cout << "Wynik przez tablice: " << wynikTablica[0] << std::endl;

    return 0;
}
