#include<iostream>
using namespace std;

void swap(int&, int&);

int main()
{
    int a,b;
    cout<<"Enter two numbers:"<<endl;
    cin>>a>>b;
    swap(a,b);
    cout<<"a="<<a<<" b="<<b;
    return 0;
}

void swap(int &x, int &y)
{
    y=(x+y)-(x=y);
}