#include<iostream>
#include<string.h>
using namespace std;

class MyString
{
    private:
        char str[100];
    public:
        void set(char x[])
        {
            strcpy(str,x);
        }
        void display()
        {
            cout<<str;
        }
        MyString operator!()
        {
            MyString temp;
            int i;
            for(i=0; i<strlen(str); i++)
            {
                if(str[i]>='A' && str[i]<='Z')
                    temp.str[i] = str[i]+32;
                else if(str[i]>='a' && str[i]<='z')
                    temp.str[i] = str[i]-32;
                else
                    temp.str[i] = str[i];
            }
            return temp;
        }
};

int main()
{
    MyString s1;
    s1.set("Welcome to GOA Singham");
    s1.display();
    cout<<endl;
    s1=!s1;
    s1.display();
}