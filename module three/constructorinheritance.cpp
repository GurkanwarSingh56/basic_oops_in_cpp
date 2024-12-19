#include<iostream>
using namespace std;
class b1{
    public:
    b1(int a){
        cout<<"constructor b1 called"<<a<<endl;
    }
};
class b2{
    public:
    b2(int b){
        cout<<"constructor b2 called"<<b<<endl;
    }
};
class d: public b1 ,public b2 {
    public:
    d(int ab1,int ab2,int d3):b1(ab1),b2(ab2){
        cout<<"constructor d called"<<d3<<endl;
    }
};
int main (){
    d a1(1,2,3);
}