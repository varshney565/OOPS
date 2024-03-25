class Vehicle {
    private : 
        int maxSpeed;
    protected : 
        int numTyres;
    public : 
        string color;

    Vehicle(int maxSpeed) {
        cout<<"Vehicle's constructor getting called with value " << maxSpeed <<"!!"<<"\n";
        this->maxSpeed = maxSpeed;
    }

    void print() {
        cout<<"Vehicle\n";
    }

    ~Vehicle() {
        cout<<"Vehicle's destructor\n";
    }
};