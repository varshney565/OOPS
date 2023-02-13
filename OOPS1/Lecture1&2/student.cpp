class Student{
    public : 
        int RollNo;
    private :
        int age;
    public :
        void display(){
            cout<<"age"<<" : "<<age<<"\n";
            cout<<"roll_number : "<<RollNo<<"\n";
        }

        int getAge(){
            return this->age;
        }

        void setAge(int age){
            this->age = age;
        }
};