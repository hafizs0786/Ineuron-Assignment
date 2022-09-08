#include<iostream>
using namespace std;

int fact(int);
int comb(int, int);
void pascal(int);

int main()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    pascal(num);
    return 0;
}

int fact(int x)
{
    int i,res=1;
    for(i=1; i<=x; i++)
        res = res*i;
    return res;
}

int comb(int a,int b)
{
    return fact(a)/(fact(b)*fact(a-b));
}

void pascal(int n)
{
    int i,j,k;
    for(i=0; i<n; i++)
    {
        for(k=0; k<n-i; k++)
            cout<<" ";
        for(j=0; j<=i; j++)
        {
            cout<<comb(i,j)<<" ";
        }
        cout<<endl;
    }
}


