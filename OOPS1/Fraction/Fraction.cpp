#include<iostream>
#include<algorithm>
using namespace std;
class Fraction{
    int numenator;
    int denomenator;
    public : 
        //parameterized constructor
        Fraction(int num,int den){
            this->denomenator = den;
            this->numenator = num;
        }
        //Default Constructor
        Fraction(){

        }
        //print the fraction
        void display(){
            cout<<this->numenator <<"/"<<this->denomenator;
        }
        //simplifing two fractions
        void simplify(){
            int gcd = __gcd(this->numenator,this->denomenator);
            this->numenator = numenator/gcd;
            this->denomenator = denomenator/gcd;
        }
        //adding two fraction
        void add(const Fraction& f){
            int lcm = f.denomenator*this->denomenator/__gcd(f.denomenator,this->denomenator);
            int num = lcm/f.denomenator*f.numenator;
            this->numenator = num;
            this->denomenator = lcm;
            simplify();
        }
        //destructor
        ~Fraction(){

        }
};