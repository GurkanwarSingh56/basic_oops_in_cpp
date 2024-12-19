#include<iostream>
using namespace std;
void swapPointer(int *a,int *b)//pass by reference
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
void swapValue(int a,int b)//pass by value
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}
int main()
{
    int x=10,y=20;
    cout<<"Before swapping"<<endl;
    cout<<"Value of x is "<<x<<endl;
    cout<<"Value of y is "<<y<<endl;
    swapPointer(&x,&y);//in passbyrefrence original value is changed 
    cout<<"After swapping by pointer"<<endl;
    cout<<"Value of x is "<<x<<endl;
    cout<<"Value of y is "<<y<<endl;
    swapValue(x,y);// in passbyvalue original value is not changed although it is changed in function but it is not reflected in main function
    cout<<"After swapping by value"<<endl;
    cout<<"Value of x is "<<x<<endl;
    cout<<"Value of y is "<<y<<endl;
    return 0;
}
