#include<iostream>
#include<string.h>
using namespace std;

class Student
{
    private:
        int roll,age;
        string name;
    public:
        Student(int x,int y,string z)
        {
            roll = x;
            age = y;
            name = z;
        }
        void display()
        {
            cout<<"Roll Number: "<<roll<<endl;
            cout<<"Name: "<<name<<endl;
            cout<<"Age: "<<age<<endl;
        }
};

int main()
{
    Student s1(1,26,"Hafiz"),s2(2,25,"Akhtar");
    s1.display();
    s2.display();
    return 0;
}