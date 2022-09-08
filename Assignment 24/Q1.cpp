#include<iostream>
using namespace std;

int prime(int);

int main()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    if(prime(num))
        cout<<num<<" is a Prime number";
    else
        cout<<num<< " is not a Prime number";
    return 0;
}

int prime(int x)
{
    int i;
    for(i=2; i<x; i++)
    {
        if(x%i==0)
            return 0;
    }
    return 1;
}