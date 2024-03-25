class Student {
    private : 
        int age;
    public : 
        Student(int age) {
            this->age = age;
        }

        int getAge() {
            return this->age;
        }

        void setAge(int age) {
            this->age = age;
        }
};