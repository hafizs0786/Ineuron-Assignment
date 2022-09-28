#include<iostream>
using namespace std;

class Item
{
        int i,j;
    public:
        void setData(int x,int y)
        {
            i=x;
            j=y;
        }
        void display()
        {
            cout<<"i = "<<i<<", j = "<<j<<endl;
        }
};

class Product
{
        int p,q;
    public:
        void setData(int a,int b)
        {
            p=a;
            q=b;
        }
        operator Item()
        {
            Item i;
            i.setData(p,q);
            return i;
        }
};

int main()
{
    Item i1;
    Product p1;
    p1.setData(3,4);
    i1 = p1;
    i1.display();
    return 0;
}