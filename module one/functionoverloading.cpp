#include<iostream>
using namespace std;
class functionOverloading{
    int c;
    public:
    void add(int a,int b){
    c=a+b;
    cout<<c<<endl<<"function with parameter called"<<endl;
    }
    void add(){
        int a,b;
        cout<<"enter 2 no"<<endl;
        cin>>a>>b;
        cout<<a+b<<"function with parameter called"<<endl;
    }
};
int main ()
{
    functionOverloading f;
    f.add(1,2);// it will call first fn which is with argument
    f.add();// it will call second fn which is without parameters
}