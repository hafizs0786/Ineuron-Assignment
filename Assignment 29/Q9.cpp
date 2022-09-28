#include<iostream>
using namespace std;

class Dollar
{
        int usd;
    public:
        Dollar(){}
        Dollar(int x)
        { usd = x; }

        void display()
        {
            cout<<usd<<" Dollars"<<endl;
        }
        operator int()
        {
            return usd;
        }
};

int main()
{
    int x = 50;
    Dollar d;
    d = x;
    d.display();
    return 0;

}
