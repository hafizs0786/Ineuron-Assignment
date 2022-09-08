#include<iostream>
using namespace std;

int isFib(int);

int main()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    if(isFib(num))
        cout<<num<<" is term of Fibonacci series.";
    else
        cout<<num<<" is not term of Fibonacci series";
    return 0;    
}

int isFib(int x)
{
    int i,a=0,b=1,fib=0;
    for(i=0; i<x;i++)
    {
        fib = a+b;
        a=b;
        b=fib;
        if(x==fib)
            return 1;
    }
    return 0;
}