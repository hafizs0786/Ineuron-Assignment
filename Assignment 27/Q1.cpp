#include<iostream>
using namespace std;

class Complex
{
    private:
        int real,imag;
        static Complex temp;
    public:
        void set(int a,int b)
        {
            real = a;
            imag = b;
        }
        void display()
        {
            cout<<real<<" + "<<imag<<"i"<<endl;
        }
        Complex operator+(Complex c)
        {
            temp.real = real+c.real;
            temp.imag = imag+c.imag;
            return temp;
        }
        Complex operator-(Complex c)
        {
            temp.real = real-c.real;
            temp.imag = imag-c.imag;
            return temp;
        }
        Complex operator*(Complex c)
        {
            temp.real = real*c.real;
            temp.imag = imag*c.imag;
            return temp;
        }
        bool operator==(Complex c)
        {
            if (real==c.real && imag ==c.imag)
                return 1;
            else
                return 0;
        }
        
};
Complex Complex::temp;

int main()
{
    Complex c1,c2,c3,c4,c5;
    c1.set(4,6);
    c2.set(2,3);
    c3 = c1+c2;
    c3.display();
    c4 = c1-c2;
    c4.display();
    c5 = c1*c2;
    c5.display();
    if(c1==c2)
        cout<<"Same complex numbers";
    else
        cout<<"Different complex numbers";
    return 0;
}