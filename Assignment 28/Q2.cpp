#include<iostream>
using namespace std;

class Complex
{
    int real,imag;
    public:
        void setData(int real,int imag)
        {
            this->real = real;
            this->imag = imag;
        }
        void display()
        {
            cout<<real<<" + "<<imag<<"i"<<endl;
        }
};

int main()
{
    Complex c1,c2;
    c1.setData(3,4);
    c2.setData(5,6);
    c1.display();
    c2.display();
    return 0;
}