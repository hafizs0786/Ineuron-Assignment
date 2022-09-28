#include<iostream>
using namespace std;

class Coordinate
{
        int x,y,z;
    public:
        Coordinate(int a,int b,int c)
        {
            x=a; y=b; z=c;
        }
        void display()
        {
            cout<<x<<" "<<y<<" "<<z<<endl;
        }

        friend Coordinate operator,(Coordinate, Coordinate );
};

Coordinate operator,(Coordinate a, Coordinate b)
{
    //With friend function we can also access left object of ','operator
    return b; //Returning right object of ','operator
}


int main()
{
    Coordinate c1(2,3,4),c2(3,4,5),c3=(c1,c2);
    c3.display(); //Assigning c2 in c3
    return 0;
}