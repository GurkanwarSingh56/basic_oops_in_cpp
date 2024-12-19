#include<iostream>
using namespace std;
class Employee{
int a;
public:
int employeeId;
string name;
Employee(void){
    cout<<"enter the employee id"<<endl;
    cin>>employeeId;
    cout<<"Enter employe name"<<endl;
    cin >> name;
}
};
class salary : public  Employee{
float eSalary;
public:
salary(void){
    cout<<"Enter the salary of the employee"<<endl;
    cin>>eSalary;
}
void display(){
    cout<<"Employee Id "<<employeeId<<endl;
    cout<<"employee name "<<name<<endl;
    cout<<"Employee salary "<<eSalary<<endl;
}
};
int main(){
    salary s1;
    s1.display();
    return 0;
}