#include<iostream>
using namespace std;

int main()
{
    int i,num[10],sum=0;
    cout<<"Enter 10 numbers:"<<endl;
    for(i=0; i<10; i++)
    {
        cin>>num[i];
        sum+=num[i];
    }
    cout<<"Sum of 10 numbers is "<<sum;
    return 0;    
}