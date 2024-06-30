#include "ZadKcpp.h"
#include <iostream>
#include <string>

// Funkcje pomocnicze
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

void manipulateString() {
    std::string napis = "PrzykladowyNapis";

    // 1. empty()
    if (napis.empty()) {
        std::cout << "Napis jest pusty." << std::endl;
    } else {
        std::cout << "Napis nie jest pusty." << std::endl;
    }

    // 2. size(), length()
    std::cout << "Dlugosc napisu: " << napis.size() << std::endl;

    // 3. at()
    try {
        std::cout << "Znak na pozycji 5: " << napis.at(5) << std::endl;
    } catch (std::out_of_range &e) {
        std::cerr << "Blad: " << e.what() << std::endl;
    }

    // 4. clear()
    napis.clear();
    std::cout << "Po wywolaniu clear(), napis jest pusty: " << napis << std::endl;

    napis = "PrzykladowyNapis";

    // 5. erase
    napis.erase(5, 5);
    std::cout << "Napis po usunieciu fragmentu: " << napis << std::endl;

    // 6. find
    size_t pozycja = napis.find("Napis");
    if (pozycja != std::string::npos) {
        std::cout << "Znaleziono 'Napis' na pozycji: " << pozycja << std::endl;
    } else {
        std::cout << "'Napis' nie został znaleziony." << std::endl;
    }

    // 7. swap
    std::string inny_napis = "InnyNapis";
    std::cout << "Przed zamiana: napis = " << napis << ", inny_napis = " << inny_napis << std::endl;
    napis.swap(inny_napis);
    std::cout << "Po zamianie: napis = " << napis << ", inny_napis = " << inny_napis << std::endl;

    // 8. substr
    std::string podnapis = napis.substr(0, 9);
    std::cout << "Podnapis: " << podnapis << std::endl;

    // 9. append
    napis.append("DodatkowyTekst");
    std::cout << "Napis po dodaniu tekstu: " << napis << std::endl;
}

class KviCar {
private:
    std::string fPlate;
    std::string fFakePlate;
    std::string fColor;

public:
    KviCar();
    ~KviCar();
    void Print();
};

KviCar::KviCar() {
    std::cout << "The KviCar Object has been created" << std::endl;
}

KviCar::~KviCar() {
    std::cout << "The KviCar Object has been destroyed" << std::endl;
}

void KviCar::Print() {
    std::cout << "---------------------------------------" << std::endl;
    std::cout << "All about me:" << std::endl;
    std::cout << "---------------------------------------" << std::endl;
    std::cout << "Plate No.:     " << fPlate << std::endl;
    std::cout << "FakePlate No.: " << fFakePlate << std::endl;
    std::cout << "Color:         " << fColor << std::endl;
    std::cout << "---------------------------------------\n\n" << std::endl;
}

// Definicje metod klasy ZadKcpp
void ZadKcpp::zadanie1_1() {
    int x = 5;
    int wynik;
    int wynikTab[1];

    std::cout << "Przez wartosc: " << PrzezWartosc(x) << std::endl;
    PrzezReferencje(x, wynik);
    std::cout << "Przez referencje: " << wynik << std::endl;
    PrzezWskaznik(x, &wynik);
    std::cout << "Przez wskaznik: " << wynik << std::endl;
    PrzezTablice(x, wynikTab);
    std::cout << "Przez tablice: " << wynikTab[0] << std::endl;
}

void ZadKcpp::zadanie2_1() {
    manipulateString();
}

void ZadKcpp::zadanie3_1() {
    enum class Miesiace {
        Styczen,
        Luty,
        Marzec,
        Kwiecien,
        Maj,
        Czerwiec,
        Lipiec,
        Sierpien,
        Wrzesien,
        Pazdziernik,
        Listopad,
        Grudzien
    };

    Miesiace aktualny_miesiac = Miesiace::Kwiecien;

    switch (aktualny_miesiac) {
        case Miesiace::Styczen:
            std::cout << "Styczeń" << std::endl;
            break;
        case Miesiace::Luty:
            std::cout << "Luty" << std::endl;
            break;
        case Miesiace::Marzec:
            std::cout << "Marzec" << std::endl;
            break;
        case Miesiace::Kwiecien:
            std::cout << "Kwiecień" << std::endl;
            break;
        case Miesiace::Maj:
            std::cout << "Maj" << std::endl;
            break;
        case Miesiace::Czerwiec:
            std::cout << "Czerwiec" << std::endl;
            break;
        case Miesiace::Lipiec:
            std::cout << "Lipiec" << std::endl;
            break;
        case Miesiace::Sierpien:
            std::cout << "Sierpień" << std::endl;
            break;
        case Miesiace::Wrzesien:
            std::cout << "Wrzesień" << std::endl;
            break;
        case Miesiace::Pazdziernik:
            std::cout << "Październik" << std::endl;
            break;
        case Miesiace::Listopad:
            std::cout << "Listopad" << std::endl;
            break;
        case Miesiace::Grudzien:
            std::cout << "Grudzień" << std::endl;
            break;
    }
}

void ZadKcpp::zadanie4_1() {
    KviCar myCar;
    myCar.Print();
}

void ZadKcpp::zadanie5_1() {
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
}
