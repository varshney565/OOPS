#include<bits/stdc++.h>
using namespace std;

class Vehicle {
    public : virtual void print() {cout<<"Vehicle\n";}
};

class Car : public Vehicle {
    public : void print() {cout<<"Car\n";}
/*
    -------------------------------
    |           (Car)             |
    |  ________________________   |
    |  |      (Vehicle)        |  |
    |  |______void print()_____|  |
    |                             |
    |         void print()        |
    -------------------------------
*/
};

int main() {
    Vehicle *v1 = new Vehicle;
    Vehicle *v2 = new Car;
    v1->print();
    v2->print();
}