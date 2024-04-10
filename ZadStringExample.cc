#include <iostream>
#include <string>
using namespace std;

void manipulateString() {
    string napis = "PrzykladowyNapis";

    // 1. empty()
    if (napis.empty()) {
        cout << "Napis jest pusty." << endl;
    } else {
        cout << "Napis nie jest pusty." << endl;
    }

    // 2. size(), length()
    cout << "Dlugosc napisu: " << napis.size() << endl;

    // 3. at()
    try {
        cout << "Znak na pozycji 5: " << napis.at(5) << endl;
    } catch (out_of_range& e) {
        cerr << "Blad: " << e.what() << endl;
    }

    // 4. clear()
    napis.clear();
    cout << "Po wywolaniu clear(), napis jest pusty: " << napis << endl;


    napis = "PrzykladowyNapis";

    // 5. erase
    napis.erase(5, 5);
    cout << "Napis po usunieciu fragmentu: " << napis << endl;

    // 6. find
    size_t pozycja = napis.find("Napis");
    if (pozycja != string::npos) {
        cout << "Znaleziono 'Napis' na pozycji: " << pozycja << endl;
    } else {
        cout << "'Napis' nie został znaleziony." << endl;
    }

    // 7. swap
    string inny_napis = "InnyNapis";
    cout << "Przed zamiana: napis = " << napis << ", inny_napis = " << inny_napis << endl;
    napis.swap(inny_napis);
    cout << "Po zamianie: napis = " << napis << ", inny_napis = " << inny_napis << endl;

    // 8. substr
    string podnapis = napis.substr(0, 9);
    cout << "Podnapis: " << podnapis << endl;

    // 9. append
    napis.append("DodatkowyTekst");
    cout << "Napis po dodaniu tekstu: " << napis << endl;
}

int main() {
    manipulateString();
    return 0;
}
