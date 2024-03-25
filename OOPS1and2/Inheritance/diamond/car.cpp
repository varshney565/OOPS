class Car : virtual public Vehicle {
    public : 
        int numGears;

    Car(int a) : Vehicle(a) {
        cout<<"Car's constructor getting called with value " << a << "!!"<<"\n";
    }

    ~Car() {
        cout<<"Car's destructor getting called !!\n";
    }

    void print() {
        cout<<"Car\n";
    }
};