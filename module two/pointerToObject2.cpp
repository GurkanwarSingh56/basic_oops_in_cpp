#include<iostream>
using namespace std;
class pointer{
    int a,b;
    public:
    void getData()
    {
        cout<<"Enter the value of a and b";
        cin>>a>>b;
    }
    void showData(){
    cout<<"the value of a and b is "<<a<<" "<<b<<endl;
    }
};
int main(){
    int size=4;
    pointer *p = new pointer[size];
    pointer *tempptr = p;
    for (int i = 0; i < size; i++)
    {
        p->getData();
        p++;
    }
    for (int i = 0; i < size; i++)
    {
       tempptr->showData();
       tempptr++;
    }
    
}