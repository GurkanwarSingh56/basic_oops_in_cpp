#include <iostream>
using namespace std;

class demo {
    int a;
public:
    void setdata() {
        cin >> a;
    }

    void showdata() {
        cout << a << endl;
    }

    // Declare the friend function for operator overloading
    friend demo operator+(const demo& d1, const demo& d2);
};

// Define the friend function for operator overloading
demo operator+(const demo& d1, const demo& d2) {
    demo temp;
    temp.a = d1.a + d2.a;
    return temp;
}

int main() {
    demo aa, bb, cc;
    aa.setdata();
    bb.setdata();
    cc = aa + bb;
    cc.showdata();
    return 0;
}