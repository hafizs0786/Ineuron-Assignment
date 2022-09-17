#include<iostream>
using namespace std;

class Cube
{
    private:
        int side,volume;
    public:
        Cube(int x)
        {
            side = x;
        }
        int vol()
        {
            volume = side*side*side;
            return volume;
        }
};

int main()
{
    Cube c1(3),c2(4);
    cout<<c1.vol()<<endl;
    cout<<c2.vol()<<endl;
    return 0;
}