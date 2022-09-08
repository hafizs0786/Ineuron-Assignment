#include<iostream>
using namespace std;

int sum(int,int,int=0);

int main()
{int a,b,c;
    cout<<"Enter two numbers:"<<endl;
    cin>>a>>b;
    cout<<"Sum of "<<a<<" and "<<b<<" is "<<sum(a,b)<<endl;
    cout<<"Enter three numbers:"<<endl;
    cin>>a>>b>>c;
    cout<<"Sum of "<<a<<", "<<b<<" and "<<c<<" is "<<sum(a,b,c);
}

int sum(int x, int y, int z)
{
    return x+y+z;
}