#include<iostream>
using namespace std;
class constructor{
int a,b;
public:
constructor(void);// declaration of constructor
};
constructor::constructor(void){// definition of constructor using scope resolution operator outside the class
    a=10,b=20;
    cout << "The value of a is " << a << " and the value of b is " << b << endl;
}
int main (){
    constructor obj;// object creation and constructor calling automatically when object is created 
    return 0;
}