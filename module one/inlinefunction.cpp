#include <iostream> // Include necessary header files

using namespace std;

// Define an inline function
inline int add(int a, int b) {
    return a + b;
}

int main() {
    int x = 5, y = 10;
    cout << "Sum: " << add(x, y) << endl; // Call the inline function
    return 0;
}