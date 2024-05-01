#include <iostream>
#include <string>
using namespace std;

class KviCar {
private:
    string fPlate;
    string fFakePlate;
    string fColor;

public:
    KviCar();
    ~KviCar();
    void Print();
};

KviCar::KviCar() {
    cout <<"The KviCar Object has been created" << endl;
};

KviCar::~KviCar() {
    cout <<"The KviCar Object has been destroyed" << endl;
};

void KviCar::Print() {
    cout <<"---------------------------------------"<< endl;
    cout <<"All about me:"<< endl;
    cout <<"---------------------------------------"<< endl;
    cout <<"Plate No.:     "<< fPlate     << endl;
    cout <<"FakePlate No.: "<< fFakePlate << endl;
    cout <<"Color:         "<< fColor     << endl;
    cout <<"---------------------------------------\n\n"<< endl;
}

int main() {
    KviCar myCar;
    myCar.Print();
    return 0;
}
