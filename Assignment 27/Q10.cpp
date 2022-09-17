#include<iostream>
using namespace std;

class Matrix
{
    private:
        int a[3][3];
    public:
        void set()
        {            
            int i,j;
            cout<<"Enter Matrix Element (3x3):"<<endl;
            for(i=0; i<3; i++)
            {
                for(j=0; j<3; j++)
                {
                    cin>>a[i][j];
                }
            }
        }

        void display()
        {
            int i,j;
            for(i=0; i<3; i++)
            {
                for(j=0; j<3; j++)
                {
                    cout<<a[i][j]<<" ";
                }
                cout<<endl;
            }
        }
        Matrix operator+(Matrix x)
        {
            int i,j;
            Matrix temp;
            for(i=0; i<3; i++)
            {
                for(j=0; j<3; j++)
                {
                    temp.a[i][j] = a[i][j]+x.a[i][j];
                }
            }
            return temp;
        }
};

int main()
{
    Matrix m1,m2,m3;
    m1.set();
    m2.set();    
    cout<<"First Matrix:"<<endl;
    m1.display();
    cout<<"Second Matrix:"<<endl;
    m2.display();
    m3=m1+m2;
    cout<<"Addition of Matrix:"<<endl;
    m3.display();
}