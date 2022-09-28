#include<iostream>
using namespace std;

class Complex
{
    private:
        int real,imag;
    public:
        void set(int x,int y)
        {
            real=x;
            imag=y;
        }
        void display()
        {
            cout<<real<<" + "<<imag<<"i"<<endl;
        }
        Complex& operator=(Complex &C)
        {
            real=C.real;
            imag=C.imag;
            return C;
        }
};

int main()
{
    Complex c1,c2,c3;
    c1.set(3,4);
    c3=c2=c1;
    c1.display();
    c2.display();
    c3.display();
    return 0;
}