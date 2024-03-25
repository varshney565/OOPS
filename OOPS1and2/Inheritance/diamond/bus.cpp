class Bus : public Truck,public Car {
    public : 
        Bus(int a) : Vehicle(a),Truck(a+1),Car(a+1) {
            cout<<"Bus's constructor getting called with value "<<a<<"\n";
        }

        ~Bus() {
            cout<<"Bus's destructor getting called !!\n";
        }
};