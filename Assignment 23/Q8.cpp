#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter two numbers:"<<endl;
    cin>>a>>b;
    b=(a+b)-(a=b);
    cout<<"Value after swap:"<<endl;
    cout<<"a="<<a<<" b="<<b;
    return 0;
}