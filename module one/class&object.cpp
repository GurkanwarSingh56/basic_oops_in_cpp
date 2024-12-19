#include<iostream>
using namespace std;
class student //class is a blueprint of object
{
    public: // access specifier
    // data members
    int id; 
    string name;
    float percentage;
    // member functions for input
    void insert(int i,string n,float p)
    {
        id=i;
        name=n;
        percentage=p;
    }
    // member functions for output
    void display()
    {
        cout<<"Id of student is "<<id<<endl;
        cout<<"Name of student is "<<name<<endl;
        cout<<"Percentage of student is "<<percentage<<endl;
    }
};
// main function
int main()
{
    // creating object of class student
    student s1;
    // calling member functions for input
    s1.insert(1,"John",90.0);
    // calling member functions for output
    s1.display();
    return 0;
}