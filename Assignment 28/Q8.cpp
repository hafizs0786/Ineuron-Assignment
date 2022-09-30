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

        Coordinate operator,(Coordinate C)
        {
            return C;
        }
};

int main()
{
    Coordinate c1(2,3,4),c2(3,4,5),c3=(c1,c2);
    c3.display(); //Assigning c2 in c3
    return 0;
}
