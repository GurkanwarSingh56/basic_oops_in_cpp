#include<iostream>
using namespace std;
class copyConstructor
{
    int a;
public:
copyConstructor(){}
copyConstructor(int b){
a=b;
}
copyConstructor(copyConstructor &obj){
    cout<<"copy constructor called"<<endl;
   a=obj.a;
}
void display(){
    cout<<"the valur of a is "<<a<<endl;
}
};
int main (){
    copyConstructor x(2),y(3),z(4);
    x.display();
    y.display();
    z.display();
    copyConstructor w(x);
    w.display();
}