#include<iostream>
using namespace std;
class base{
    public:
    void display(){
        cout<<"base class called"<<endl;
    }
};
class derived : public base{
    public:
    void display(){
        cout<<"derived class called"<<endl;
    }
};
int main(){
  base *ptrd;
  derived objd; 
  base objb;
  ptrd = &objd;
  ptrd->display();
}