#include<iostream>
using namespace std;

int highDig(int);

int main()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<"Highest digit in "<<num<<" is "<<highDig(num);
    return 0;
}

int highDig(int x)
{
    int high=0;
    while(x)
    {
        if(x%10>high)
            high=x%10;
        x=x/10;
    }
    return high;
}