#include<iostream>
using namespace std;

class Bank
{
    private:
        int prin,year;
        static float roi;
    public:
        Bank(int p, int y)
        {
            prin = p;
            year = y;
        }
        float si()
        {
            return prin*roi*year/100;
        }
};

float Bank::roi=5.4;

int main()
{
    Bank b1(20000,2),b2(45000,3);
    cout<<b1.si()<<endl;
    cout<<b2.si();
    return 0;
}