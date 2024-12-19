#include<iostream>
using namespace std;
class arrayOfObject{
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
    arrayOfObject a[5];
    for (int i = 0; i < 4; i++)
    {
        a[i].putData();
        a[i].getData();
    }
    return 0;
}