#include<iostream>
using namespace std;

class Invent1
{
        float a,b;
    public:
        Invent1(){}
        Invent1(int x,int y)
        {
            a=x;
            b=y;
        }
        float getA()
        { return a;}
        float getB()
        { return b;}
        operator float()
        {
            return a;
        }
};

class Invent2
{
        int x,y;
    public:
        Invent2(){}
        Invent2(Invent1 s)
        {
            x = s.getA();
            y = s.getB();
        }
        void display()
        {
            cout<<"x = "<<x<<", y = "<<y<<endl;
        }
};

int main()
{
 Invent1 s1(4,5);
 Invent2 d1;
 float tv;
 tv=s1;
 d1=s1;
 cout<<tv<<endl;
 d1.display();
 return 0;
}