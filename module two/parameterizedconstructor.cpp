#include<iostream>
using namespace std;
class ParamerterizedConstructor{
public:
ParamerterizedConstructor (int a,int b){
cout<<a+b<<endl;
}
};
int main(){
    ParamerterizedConstructor a(1,3);
}