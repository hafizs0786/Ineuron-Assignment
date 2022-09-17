#include<iostream>
using namespace std;

class Complex
{
    private:
        int real,imag;
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
        Complex operator++(int)
        {
            Complex temp;
            temp.real=real++;
            temp.imag=imag++;
            return temp;
        }
        Complex operator++()
        {
            Complex temp;
            temp.real=++real;
            temp.imag=++imag;
            return temp;
        }
        Complex operator--(int)
        {
            Complex temp;
            temp.real=real--;
            temp.imag=imag--;
            return temp;
        }  
        Complex operator--()
        {
            Complex temp;
            temp.real=--real;
            temp.imag=--imag;
            return temp;
        }                
};

int main()
{
    Complex c1,c2,c3,c4;
    c1.set(4,5);
    c2.set(7,8);
    cout<<"C1 original value : ";c1.display();
    cout<<"C2 original value : ";c2.display();
    c1++;
    c2--;
    cout<<"C1 after increment : ";c1.display();
    cout<<"C2 after decrement : ";c2.display();
    c3=++c1;    
    c4=--c2;    
    cout<<"C3=++c1 : ";c3.display();
    cout<<"C4=--c2 : ";c4.display();
    return 0;
}