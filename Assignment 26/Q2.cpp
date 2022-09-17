#include<iostream>
using namespace std;

class Time
{
    private:
        int hr,min,sec;
    public:
        void setTime(int a,int b,int c)
        {
            hr=a; min=b; sec=c;
        }
        void showTime()
        {
            cout<<hr<<":"<<min<<":"<<sec<<endl;
        }
        void normalize()
        {
            min = min+sec/60;           
            sec = sec%60;
            hr = hr+min/60;
            min = min%60;
        }
        Time add(Time T)
        {
            Time temp;
            temp.hr=hr+T.hr;
            temp.min=min+T.min;
            temp.sec=sec+T.sec;
            temp.normalize();
            return temp;
        }
};

int main()
{
    Time t1,t2,t3;
    t1.setTime(6,55,40);
    t2.setTime(8,40,55);
    t1.showTime();
    t2.showTime();
    t3=t1.add(t2);
    t3.showTime();
    return 0;
}