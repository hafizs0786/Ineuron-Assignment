#include<iostream>
using namespace std;

class Complex
{
        int real,imag;
    public:
        Complex(){}
        Complex(int n)
        {
            real = n;
            imag = n+1;
        }
        void display()
        {
            cout<<real<<" + "<<imag<<"i"<<endl;
        }
};

int main()
{
    Complex c1;
    int x = 5;
    c1 = x;
    c1.display();
    return 0;
}