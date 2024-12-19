#include<iostream>
using namespace std;
class staticDataMember{
    public:
    static int a;
    static int b;
   staticDataMember(){
        a++;
        b++;
        cout<<"Value of a is "<<a<<endl;
        cout<<"Value of b is "<<b<<endl;
    }
};
int staticDataMember::a;
int staticDataMember::b=100;
int main(){
    staticDataMember s1;
    staticDataMember s2;
    staticDataMember s3;
    return 0;
}