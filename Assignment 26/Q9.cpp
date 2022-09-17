#include<iostream>
using namespace std;

class Bill
{
    private:
        float unit;
    public:
        void get(float x)
        {
            unit = x;
        }
        float calculateBill()
        {
            if(unit<=100)
                return unit*1.20;
            else if (unit<=200)
                return unit*2;
            else
                return unit*3;
        }
};

int main()
{
    Bill b1;
    float unit;
    cout<<"Enter used electricity unit:"<<endl;
    cin>>unit;
    b1.get(unit);
    cout<<b1.calculateBill();
    return 0;
}