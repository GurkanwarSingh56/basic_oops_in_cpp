#include<iostream>
using namespace std;
class Employee{
    protected:
int serialNumber;
public:
int employeeId;
string name;
Employee(void){
    cout<<"enter the employee id"<<endl;
    cin>>employeeId;
    cout<<"Enter employe name"<<endl;
    cin >> name;
    cout<<"Enter the serial number"<<endl;
    cin>>serialNumber;
}
void displaySN();
};
    void Employee::displaySN() {
        
        cout << "Serial Number: " << serialNumber << endl;
    }


class salary : protected  Employee{
    public:
    void display(){
        cout<<"Employe name"<<name<<endl;
        cout<<"Employe id"<<employeeId<<endl;
        displaySN();
    }
   

};
int main(){
    salary s1;
    s1.display();
}