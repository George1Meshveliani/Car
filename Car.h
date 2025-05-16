#include <iostream>
#include <string>
using namespace std;

class Car {
    private:
        int carPrice;
    public:
        int year;
        string brand;

        Car(int y, string b) {
            year = y;
            brand = b;
        }

        // Car Validation Method
        void carValidation();

        int maxSpeed(int speed);

        void setCarPrice(int p);

        int getCarPrice();
};

void Car::carValidation() {
    if (year < 2010) {
        cout << "Old" << endl;
    }
    else {
        cout << "New" << endl;
    }
};


int Car::maxSpeed(int speed) {
    return speed;
};

void Car::setCarPrice(int p) {
        carPrice = p;
};

int Car::getCarPrice() {
    return carPrice;
}
