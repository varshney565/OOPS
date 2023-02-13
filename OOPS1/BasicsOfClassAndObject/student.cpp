class Student{
    public : 
        int RollNo;
    private :
        int age;
    public :
        //default contructor
        Student(){

        }

        //Parameterized constructor
        Student(int age,int RollNo){
            this->age = age;
            this->RollNo = RollNo;
        }
        
        //printing the object
        void display(){
            cout<<"age"<<" : "<<age<<"\n";
            cout<<"roll_number : "<<RollNo<<"\n";
        }

        //setter
        int getAge(){
            return this->age;
        }

        //getter
        void setAge(int age){
            this->age = age;
        }
};