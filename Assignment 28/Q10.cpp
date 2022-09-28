#include<iostream>
using namespace std;

class Distance
{
    private:
        int feet,inches;
    public:
        Distance(){};
        Distance(int f,int i)
        {
            feet = f;
            inches = i;
        }
        void display()
        {
            cout<<"Feet = "<<feet<<", Inches = "<<inches<<endl;
        }
        void operator() (int a,int b,int c)
        {
            feet = a+c+5;
            inches = a+b+15;
        }
};

int main()
{
    Distance d1,d2(5,6);
    d1(10,20,30);
    d1.display();
    return 0;
}