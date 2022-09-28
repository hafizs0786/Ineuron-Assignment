#include<iostream>
using namespace std;

class Complex
{
    int real,imag;
    public:
        friend istream& operator>>(istream&, Complex&);
        friend ostream& operator<<(ostream&, Complex);
};

istream& operator>>(istream &i, Complex &c)
{
    cout<<"Real number: ";
    i>>c.real;
    cout<<"Imaginary number: ";
    i>>c.imag;
    cout<<endl;
    return i;
}
ostream& operator<<(ostream &o, Complex c)
{
    o<<c.real<<" + "<<c.imag<<"i"<<endl;
    return o;
}

int main()
{
    Complex c1,c2;
    cin>>c1>>c2;
    cout<<"c1 = "<<c1<<"c2 = "<<c2;
    return 0;
}