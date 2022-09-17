#include<iostream>
using namespace std;

class Time
{
    private:
        int Hours,Minutes,Seconds;
    public:
        friend ostream& operator<<(ostream&, Time);
        friend istream& operator>>(istream&, Time&);
        void display()
        {
            cout<<Hours<<":"<<Minutes<<":"<<Seconds;
        }
        bool operator==(Time t)
        {
            if(Hours==t.Hours && Minutes==t.Minutes && Seconds==t.Seconds)
                return 1;
            else
                return 0;
        }
};

ostream& operator<<(ostream &os, Time t)
{
    cout<<"Hours    :  "<<t.Hours<<endl;
    cout<<"Minutes  :  "<<t.Minutes<<endl;
    cout<<"Seconds  :  "<<t.Seconds<<endl<<endl;
    return os;
}
istream& operator>>(istream &is, Time &t)
{
    cout<<"Enter Hours    :  ";
    is>>t.Hours;
    cout<<"Enter Minutes  :  ";
    is>>t.Minutes;
    cout<<"Enter Seconds  :  ";
    is>>t.Seconds;
    cout<<endl;
    return is;
}

int main()
{
    Time t1,t2;
    cout<<"Enter First Time:"<<endl<<"--------------------"<<endl;
    cin>>t1;
    cout<<"First Time"<<endl<<t1;
    cout<<"Enter Second Time:"<<endl<<"--------------------"<<endl;
    cin>>t2;
    cout<<"Second Time"<<endl<<t2;
    if(t1==t2)
        cout<<"Times are same.";
    else   
        cout<<"Times are Different.";

    return 0;
}