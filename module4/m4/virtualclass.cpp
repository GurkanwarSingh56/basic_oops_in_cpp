#include<iostream>
using namespace std;
class base{
public:
virtual void display(){
    cout<<"Base display"<<endl;
}
};
class derived : public base{
    public:
    void display(){
    cout<<"derived display"<<endl;
}
};
int main(){
    base *ptrb;
    derived d;
    base b;
    ptrb=&d;
    ptrb->display();

}