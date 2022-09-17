#include<iostream>
using namespace std;

class Fraction
{
    private:
        long numerator;
        long denominator;
    public:
        Fraction()
        {
            numerator = 0;
            denominator = 0;
        }
        friend istream& operator>>(istream&, Fraction&);
        friend ostream& operator<<(ostream&, Fraction);

        Fraction operator++(int)
        {
            Fraction temp;
            temp.numerator = numerator++;
            temp.denominator = denominator++;
            return temp;
        }
        Fraction operator++()
        {
            Fraction temp;
            temp.numerator = ++numerator;
            temp.denominator = ++denominator;
            return temp;
        }
};

istream& operator>>(istream &i, Fraction &f)
{
    cout<<"Numerator    :  ";
    i>>f.numerator;
    cout<<"Denominator  :  ";
    i>>f.denominator;
    cout<<endl;
    return i;
}

ostream& operator<<(ostream &o, Fraction f)
{
    o<<f.numerator<<"/"<<f.denominator<<endl;
    return o;
}

int main()
{
    Fraction f1,f2;
    cout<<"f1  :  "<<f1<<"f2  :  "<<f2<<endl;
    cout<<"Enter First Fraction Value"<<endl;
    cin>>f1;
    f1++;
    cout<<"f1++  :  "<<f1;
    ++f1;
    cout<<"++f1  :  "<<f1<<endl;
    cout<<"Enter Second Fraction Value"<<endl;
    cin>>f2;
    f2=++f1;
    cout<<"f2 = ++f1"<<endl<<"f1  :  "<<f1<<"f2  :  "<<f2<<endl;
    f2=f1++;
    cout<<"f2 = f1++"<<endl<<"f1  :  "<<f1<<"f2  :  "<<f2;
    return 0;
}