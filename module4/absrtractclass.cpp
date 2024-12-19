#include <iostream>
using namespace std;

// Abstract class
class AbstractBase {
public:
    // Pure virtual function
    virtual void display() = 0;
};

// Derived class
class Derived : public AbstractBase {
public:
    void display() override {
        cout << "Derived display" << endl;
    }
};

int main() {
    // AbstractBase ab; // This will cause a compilation error
    Derived d;
    d.display(); // Calls the overridden function in Derived class
    return 0;
}