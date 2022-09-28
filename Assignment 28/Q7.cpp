#include<iostream>
using namespace std;

class Integer
{
    private:
        int i;
    public:
        Integer(){}
        Integer(int x)
        { i = x; }

        void display()
        {
            cout<<i;
        }

        int operator!()
        {
            return -i; //This will negate the given number
        }
};

int main()
{
    Integer i=5;
    i = !i;
    i.display();
    return 0;
}