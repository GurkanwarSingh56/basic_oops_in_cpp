#include<iostream>
using namespace std;
class thisptr{
    int a;
    public:
    void getData(int a){
        this->a=a;
    }
    void showData(){
        cout<<"the number is "<<a;
    }
};
int main(){
    thisptr a;
    a.getData(5);
    a.showData();
}