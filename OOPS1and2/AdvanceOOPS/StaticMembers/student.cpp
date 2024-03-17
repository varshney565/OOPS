class Student{
    public : 
    int age;
    int rool;
    static int totalStudents;
    Student(int age,int rool){
        this->age = age;
        this->rool = rool;
        totalStudents++;
    }

    static int getTotalStudents(){
        return Student::totalStudents;
    }
};

int Student::totalStudents = 0; //initialization of static fields
//how to access
//Student::totalStudents