#include<iostream>
using namespace std;

int sum(int, int);
float sum(float,float);

int main()
{
    int a,b;
    float x,y;
    cout<<"Enter two numbers:"<<endl;
    cin>>a>>b;
    cout<<"Sum of "<<a<<" and "<<b<<" is "<<sum(a,b)<<endl;
    cout<<endl<<"Enter two numbers in point:"<<endl;
    cin>>x>>y;
    cout<<"Sum of "<<x<<" and "<<y<<" is "<<sum(x,y);

    return 0;
}

int sum(int a, int b)
{
    return a+b;
}

float sum(float x, float y)
{
    return x+y;
}