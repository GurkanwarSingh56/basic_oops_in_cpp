#include<iostream>
using namespace std;

class b1 {
    public:
    string EmployeeName;
    b1(void) {
        cout << "Enter employee name: " << endl;
        cin >> EmployeeName;
    }
};

class b2 {
    public:
    int EmployeeID;
    b2(void) {
        cout << "Enter employee ID: " << endl;
        cin >> EmployeeID;
    }
};

class d : public b1, public b2 {
    public:
    int EmployeeSalary;
    d(void) {
        cout << "Enter employee salary: " << endl;
        cin >> EmployeeSalary;
    }
    void display();
};

void d::display() {
    cout << "Employee Name: " << EmployeeName << endl;
    cout << "Employee ID: " << EmployeeID << endl;
    cout << "Employee Salary: " << EmployeeSalary << endl;
}

int main() {
    d d;
    d.display();
    return 0;
}