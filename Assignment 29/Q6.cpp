#include<iostream>
using namespace std;

class Time
{
        int seconds;
    public:
        Time(int d)
        {
            seconds = d*60;
        }
        void display()
        {
            cout<<"Time in seconds: "<<seconds<<endl;
        }
};

int main()
{
    int duration;
    cout<<"Enter time duration in minutes : ";
    cin>>duration;
    Time t1 = duration;
    t1.display();
    return 0;
}