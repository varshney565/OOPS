#include<iostream>
using namespace std;
#include"Student.cpp"
int main(){
    //creating statically.
    Student s1,s2;
    s1.display();


    //creating dynamically.
    Student *s3 = new Student(12,101);
    // s3->age = 22; //this line will give error
    s3->setAge(22);
    s3->display();
    
    delete s3; //we have to call the destructor for dynamically created objects explicitly.
    return 0;
}