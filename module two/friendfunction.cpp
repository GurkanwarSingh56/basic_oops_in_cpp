#include<iostream>
using namespace std;
class friendfunction{
    private:
    int a;
    protected:
    int b;
    public:
    void putData(){
        a=10;
        b=20;
    }
    friend void showData(friendfunction f1);
};
void showData(friendfunction f1)
{
    cout<<"A and B are"<<f1.a<<f1.b;
}
int main(){
    friendfunction f1;
    f1.putData();
    showData(f1);
    return 0;
}