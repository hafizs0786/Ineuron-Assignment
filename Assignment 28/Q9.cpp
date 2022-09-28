#include<iostream>
using namespace std;

class Integer
{
        int x;
    public:
        Integer(){}
        Integer(int n)
        { x=n; }
        operator int()
        { return x; }
};

int main()
{
    Integer i(6);
    int x;
    x=(int)i;
    cout<<x;
}