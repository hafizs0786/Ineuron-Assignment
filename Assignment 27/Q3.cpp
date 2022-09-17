#include<iostream>
using namespace std;

class Complex
{
    private:
        int real,imag;
    public:
        void set(int x,int y)
        {
            real = x;
            imag = y;
        }
        void display()
        {
            cout<<real<<" + "<<imag<<"i"<<endl;
        }
        friend Complex operator+(Complex,Complex);
};

Complex operator+(Complex a,Complex b)
{
    Complex temp;
    temp.real=a.real+b.real;
    temp.imag=a.imag+b.imag;
    return temp;
}

int main()
{
    Complex c1,c2,c3;
    c1.set(3,4);
    c2.set(4,5);
    c3=c1+c2;
    c1.display();
    c2.display();
    c3.display();
    return 0;
}