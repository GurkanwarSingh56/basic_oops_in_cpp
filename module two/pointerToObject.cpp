#include<iostream>
using namespace std;
class pointerToObject{
    int a,b;
    public:
    void putData(){
       cin>>a>>b;
    }
    void getData(){
        cout<<"Value of a is "<<a<<endl;
        cout<<"Value of b is "<<b<<endl;
    }
};
int main (){
    pointerToObject *p = new pointerToObject;
    p->putData();
    p->getData();
    return 0;
}