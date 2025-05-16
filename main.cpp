#include <iostream>
#include <vector>
#include <string>
#include "Car.h"
using namespace std;

int main() {
    
    Car carObj(1996, "volvo");
    Car carObj1(2010, "BMW");

    carObj.carValidation();
    carObj1.carValidation();

    cout << "Year: " << carObj.year << endl;
    cout << "Brand: " << carObj.brand << endl;
    cout << "Max speed is: " << carObj.maxSpeed(299) << endl;

    carObj1.setCarPrice(10000);
    cout << carObj1.getCarPrice() << endl;

    return 0;
}
