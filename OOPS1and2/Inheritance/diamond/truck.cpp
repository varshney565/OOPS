class Truck : virtual public Vehicle {
    public:
        Truck(int a) : Vehicle(a) {
            cout<<"Truck's constructor getting called with value " << a << "!!"<<"\n";
        }

        ~Truck() {
            cout<<"Truck's destructor getting called !!\n";
        }

        void print() {
            cout<<"Truck\n";
        }
};