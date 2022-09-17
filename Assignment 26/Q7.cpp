#include<iostream>
using namespace std;

class Box
{
    private:
        int len,wid,hei;
    public:
        Box(int a,int b,int c)
        {
            len = a;
            wid = b;
            hei = c;
        }
        int volume()
        {
            return len*wid*hei;
        }
};

int main()
{
    Box b1(3,4,5),b2(5,4,6);
    cout<<b1.volume()<<endl;
    cout<<b2.volume();
    return 0;
}