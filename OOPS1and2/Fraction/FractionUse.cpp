#include<bits/stdc++.h>
using namespace std;
#include"Fraction.cpp"

int main(){
    Fraction const f(1,2);
    //we can't do this
    // f.numenator = 12;
    f.display();
    //we can only access those methods that are marked as constant.
}