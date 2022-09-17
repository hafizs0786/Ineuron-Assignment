#include<iostream>
#include<string.h>
using namespace std;

class CString
{
    private:
        string str;
    public:
        void set(string s)
        {
            str = s;
        }
        string get()
        {
            return str;
        }
        CString operator+(CString x)
        {
            CString temp;
            temp.str = str + x.str;        
            return temp;
        }
        bool operator==(CString x)
        {
            if(str==x.str)
                return 1;
            else
                return 0;
        }
};

int main()
{
    CString s1,s2,s3,s4;
    s1.set("Abdul ");
    s2.set("Hafiz ");
    s4.set("Hafiz ");
    s3=s1+s2;
    cout<<s3.get()<<endl;
    if(s2==s4)
        cout<<"Strings are same";
    else
        cout<<"Strings are not same";
        return 0;
}