#include<iostream>
using namespace std;

class Marks
{
    private:
        int marks;
    public:
        void setMark(int x)
        {
            marks = x;
        }
        void display()
        {
            cout<<marks;
        }

        Marks* operator->()
        {
            return this;
        }
};

int main()
{
    Marks m1;
    m1->setMark(96);
    m1->display();
    return 0;
}