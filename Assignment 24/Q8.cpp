#include<iostream>
using namespace std;

float area(int);
int area(int, int);
float area(float, float);

int main()
{
    int rad,len,wid;
    float b,h;
    cout  <<"Enter radius of circle: ";
    cin>>rad;
    cout<<"Area of circle is "<<area(rad)<<endl;
    cout<<endl<<"Enter length and width of a rectangle:"<<endl;
    cin>>len>>wid;
    cout<<"Area of rectangle is "<<area(len,wid)<<endl;
    cout<<endl<<"Enter base and height of triangle:"<<endl;
    cin>>b>>h;
    cout<<"Area of triangle is "<<area(b,h);

    return 0;
}

float area(int a)
{
    return 3.14*a*a;
}

int area(int a, int b)
{
    return a*b;
}

float area(float x, float y)
{
    return (x*y)/2;
}