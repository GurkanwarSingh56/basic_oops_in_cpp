#include <iostream>
using namespace std;
class demo
{
    int a;

public:
    void setdata()
    {
        cin >> a;
    }
    void showdata()
    {
        cout << a;
    }
    demo operator+(demo aa)
    {
        demo c;
        c.a = a + aa.a;
        return c;
    }
};
int main()
{
    demo aa, bb, cc;
    aa.setdata();
    bb.setdata();
    cc = aa + bb;
    cc.showdata();
}