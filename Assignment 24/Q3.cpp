#include<iostream>
using namespace std;

int pow(int,int);

int main()
{
    int num, power;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<"Enter power of number: ";
    cin>>power;
    cout<<num<<" to the power "<<power<<" is "<<pow(num,power);
    return 0;
}

int pow(int x,int y)
{
    int i,res=1;
    for(i=0; i<y; i++)
        res = res*x;
    return res;
}