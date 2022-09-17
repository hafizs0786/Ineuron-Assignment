#include<iostream>
using namespace std;

class Counter
{
    private:
        static int count;
    public:
        Counter()
        {
            count++;
            cout<<count<<endl;
        }
};
int Counter::count=0;

int main()
{
    Counter c1,c2;
    return 0;
}