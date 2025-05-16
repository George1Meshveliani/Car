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

        int maxSpeed(int speed) {
            return speed;
        } 

        void setCarPrice(int p) {
            carPrice = p;
        }

        int getCarPrice() {
            return carPrice;
        }
};

void Car::carValidation() {
    if (year < 2010) {
        cout << "Old" << endl;
    }
    else {
        cout << "New" << endl;
    }
};
