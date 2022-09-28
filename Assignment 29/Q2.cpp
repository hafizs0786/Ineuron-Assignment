#include<iostream>
using namespace std;

class Complex
{
        int real, imag;
    public:
        void setData(int a,int b)
        {
            real = a;
            imag = b;
        }

        operator int()
        {
            return real;
        }
};

int main()
{
    Complex c1;
    c1.setData(5,6);
    int x;
    x = c1;
    cout<<x;
    return 0;
}