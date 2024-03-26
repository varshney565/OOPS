class A {  // ===> Abstract class.
    //pure virtual function
    virtual void print() = 0;
}


//we can't create object of abstract class.

class B : public A {
    // Now either B will become abstract class or it has to implement all the pure virtual functions.
}

