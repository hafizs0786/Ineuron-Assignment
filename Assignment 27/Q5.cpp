#include<iostream>
using namespace std;

class Numbers
{
    private:
        int x,y,z;
    public:
        void set(int a,int b, int c)
        {
            x=a; y=b; z=c;
        }
        void display()
        {
            cout<<"x="<<x<<", y="<<y<<", z="<<z<<endl;
        }
        Numbers operator-()
        {
            Numbers temp;
            temp.x=-x;
            temp.y=-y;
            temp.z=-z;
            return temp;
        }
};

int main()
{
    Numbers n1,n2;
    n1.set(4,-5,6);
    n2=-n1;
    n1.display();
    n2.display();
    return 0;
}