#include<iostream>
using namespace std;

class Subscript
{
    private:
        int s[10];
    public:
        int& operator[] (int index)
        {
            if(index>9)
            {
                cout<<"Index "<<index<<" out of bound";
                exit(0);
            }
            return s[index];
        }
};

int main()
{
    Subscript s1;
    s1[5] = 36;
    s1[9] = 50;
    cout<<s1[5]<<endl;
    cout<<s1[9]<<endl;
    cout<<s1[10];
    return 0;
}