#include<iostream>
using namespace std;

class Rupee
{
        float rs;
    public:
        Rupee(){}
        Rupee(float x)
        { rs = x; }

        float getRupee()
        { return rs; }

        void display()
        {
            cout<<rs<<" Rupees"<<endl;
        }
};

class Dollar
{
        float usd;
    public:
        Dollar(){}
        Dollar(float x)
        { usd = x; }
        Dollar(Rupee r)
        { usd = r.getRupee()/81.63; }

        void display()
        {
            cout<<usd<<" Dollars"<<endl;
        }

        operator Rupee()
        {
            Rupee temp;
            temp = usd*81.63;
            return temp;            
        }
};

int main()
{
    Rupee r = 23;
    Dollar d = r; // Rupee to Dollar conversion    
    r.display();
    d.display();

    Dollar d2 = 5;
    r = d2;        // Dollar to Rupee Conversion
    d2.display();
    r.display();
    return 0;
}