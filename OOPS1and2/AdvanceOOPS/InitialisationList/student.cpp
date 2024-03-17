class Student{
    public : 
    const int a;
    int &b;
    int c;
    Student(int a):a(a),b(this->c){ //Initialisation list
        //constructor
    }
};