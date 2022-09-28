#include<iostream>
using namespace std;

class Time
{
        int hrs, min;
    public:
        Time(int h,int m)
        {
            hrs=h;
            min=m;
        }
        void display()
        {
            cout<<hrs<<" Hours, "<<min<<" Minutes"<<endl;
        }
        int getMin()
        { return min; }
};

class Minute
{
        int min;
    public:
        Minute(){}        
        Minute(Time t)
        { min = t.getMin(); }

        void setMin(int m)
        { min = m; }

        void display()
        {
            cout<<min<<" Minutes"<<endl;
        }
};

int main()
{
    Time t1(2,30);
    t1.display();
    Minute m1;
    m1.setMin(45);
    m1.display();
    m1=t1; // Fetching minute from time
    t1.display();
    m1.display();
    return 0;
}