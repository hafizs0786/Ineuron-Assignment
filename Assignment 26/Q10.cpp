#include<iostream>
using namespace std;

class StaticCount
{
    public:
        static int count;
        void incr()
        {
            count++;
        }
};

int StaticCount::count;

int main()
{
    StaticCount s1,s2,s3;
    s1.incr();
    s2.incr();
    s3.incr();
    cout<<StaticCount::count;
}