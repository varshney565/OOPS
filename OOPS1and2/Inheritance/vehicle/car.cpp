class Car : public Vehicle {
    public : 
        int numGears;

    Car(int a) : Vehicle(a) {
        cout<<"Car's constructor getting called with value " << a << "!!"<<"\n";
    }
};