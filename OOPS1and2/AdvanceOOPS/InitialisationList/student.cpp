class Student{
    public : 
    const int a;
    int &b;
    Student(int a):a(a),b(this->a){ //Initialisation list
        //constructor
    }
};