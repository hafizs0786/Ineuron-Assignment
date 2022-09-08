#include<iostream>
using namespace std;

int max(int, int);
float max(float, float);

int main()
{
    int a,b;
    float x,y;
    cout<<"Enter two numbers:"<<endl;
    cin>>a>>b;
    cout<<max(a,b)<<" is greater number"<<endl;
    cout<<"Enter two number in point(Ex: 2.5, 5.2)"<<endl;
    cin>>x>>y;
    cout<<max(x,y)<<" is greater number";
    
    return 0;
}

int max(int a, int b)
{
    if(a>b)
        return a;
    else
        return b;
}

float max(float x, float y)
{
    if(x>y)
        return x;
    else
        return y;
}