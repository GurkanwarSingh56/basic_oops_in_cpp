#include <iostream>
using namespace std;

class Destructor {
public:
    Destructor() {
        count++;
        cout << "Constructor is called " << count << " time" << endl;
    }

    ~Destructor() {
        count++;
        cout << "Destructor is called " << count << " time" << endl;    
    }

private:
    static int count;
};

int Destructor::count = 0;

int main() {
    cout << "Main function" << endl;
    Destructor obj;
    {
        cout << "Block started" << endl;
        Destructor obj2, obj3;
        cout << "Block end" << endl;
    }
    cout << "Main function end" << endl;
    return 0;
}