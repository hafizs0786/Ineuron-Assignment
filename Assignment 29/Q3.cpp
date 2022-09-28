#include<iostream>
using namespace std;

class Product
{
        int p,q;
    public:
        void setData(int a,int b)
        {
            p=a;
            q=b;
        }
        int getP()
        { return p; }
        int getQ()
        { return q; }
};

class Item
{
        int i,j;
    public:
        Item(){}
        Item(Product pr)
        {
            i = pr.getP();
            j = pr.getQ();
        }
        void display()
        {
            cout<<"i = "<<i<<", j = "<<j<<endl;
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