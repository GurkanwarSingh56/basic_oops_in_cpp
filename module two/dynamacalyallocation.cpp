#include<iostream>
using namespace std;
class Da{
    
    public:
    Da(){
        cout<<"constructor called"<<endl;
    }
    ~Da(){
        cout<<"destructor called"<<endl;
    }
};
int main(){
    Da* a=new Da[4];
    delete [] a;
}