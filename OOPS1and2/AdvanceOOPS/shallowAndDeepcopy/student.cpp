#include<iostream>
#include<string.h>
using namespace std;
class Student {
    char *name;
    public : 

    Student(char*name){
        //shallow copy
        this->name = name;

        //deep copy
        this->name = new char[strlen(name)+1];
        strcpy(name,this->name);
    }

    //writing our own copy constructor
    Student(const Student &s){
        this->name = new char[strlen(name)+1];
        strcpy(name,this->name);
    }
};