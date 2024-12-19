#include<iostream>
using namespace std;
int main()
{
    const int a=10;
    cout<<"Value of a is "<<a<<endl;
    // a=20; // this will give error because we can't change the value of constant variable
    return 0;
}