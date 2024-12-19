#include<iostream>
using namespace std;
class base{
    public:
     base(void){
        cout<<"base constructor"<<endl;
    }
    void display(){
        cout<<"base class called"<<endl;
    }
};
class derived : public base{
    public:
    derived(void){
        cout<<"drieved constructor"<<endl;
    }
    void display(){
        cout<<"derived class called"<<endl;
    }
};
int main(){
    derived *ptr = new derived();//calling derived class and constructor of both class
    ptr->display();//calling display function of derived class if want to call base class fn we have define ptr for base class
    base *ptrb;
    ptrb->display();
}