#include<iostream>
using namespace std;

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

int main()
{
    Miesiace aktualny_miesiac = Miesiace::Kwiecien;

    switch (aktualny_miesiac) {
        case Miesiace::Styczen:
            cout << "Styczeń" << endl;
            break;
        case Miesiace::Luty:
            cout << "Luty" << endl;
            break;
        case Miesiace::Marzec:
            cout << "Marzec" << endl;
            break;
        case Miesiace::Kwiecien:
            cout << "Kwiecień" << endl;
            break;
        case Miesiace::Maj:
            cout << "Maj" << endl;
            break;
        case Miesiace::Czerwiec:
            cout << "Czerwiec" << endl;
            break;
        case Miesiace::Lipiec:
            cout << "Lipiec" << endl;
            break;
        case Miesiace::Sierpien:
            cout << "Sierpień" << endl;
            break;
        case Miesiace::Wrzesien:
            cout << "Wrzesień" << endl;
            break;
        case Miesiace::Pazdziernik:
            cout << "Październik" << endl;
            break;
        case Miesiace::Listopad:
            cout << "Listopad" << endl;
            break;
        case Miesiace::Grudzien:
            cout << "Grudzień" << endl;
            break;
    }

    return 0;                              
}
