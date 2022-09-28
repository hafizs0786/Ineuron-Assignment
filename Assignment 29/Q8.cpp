#include<iostream>
using namespace std;

class Rupee
{
        int rs;
    public:
        Rupee(){}
        Rupee(int x)
        { rs = x; }

        operator int()
        {
            return rs;
        }
};

int main()
{
    Rupee r = 10;
    int x = r;
    cout<<x;
    return 0;
}
