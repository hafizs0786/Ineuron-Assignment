#include<iostream>
using namespace std;

class Date
{
    private:
        int day,mon,year;
    public:
        Date(int x,int y,int z)
        {
            day = x;
            mon = y;
            year = z;
        }
        void display()
        {
            cout<<day<<"/"<<mon<<"/"<<year<<endl;
        }
};

int main()
{
    Date d1(10,5,2020),d2(13,9,2022);
    d1.display();
    d2.display();
    return 0;
}