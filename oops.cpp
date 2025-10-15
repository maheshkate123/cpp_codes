#include <iostream>
using namespace std;

class Car {
protected:
    int speed;
public:
    Car() : speed(0) {}
    virtual void drive() {
        cout << "Car is driving at " << speed << " km/h.\n";
    }
    void setSpeed(int s) { speed = s; }
    virtual ~Car() {}
};

class ElectricCar : public Car {
public:
    void drive() override {
        cout << "ElectricCar is silently driving at " << speed << " km/h.\n";
    }
};

class PetrolCar : public Car {
public:
    void drive() override {
        cout << "PetrolCar is roaring at " << speed << " km/h.\n";
    }
};

void testDrive(Car* car) {
    car->setSpeed(80);
    car->drive();
}

int main() {
    ElectricCar e;
    PetrolCar p;

    testDrive(&e);
    testDrive(&p);

    return 0;
}
