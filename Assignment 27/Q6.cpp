#include<iostream>
#include<string.h>
using namespace std;

class CString
{
    private:
        char str[40];
    public:
        void set(char s[])
        {
            strcpy(str,s);
        }
        char* get()
        {
            return str;
        }
        CString operator+(CString x)
        {
            int i,j=strlen(str);
            CString temp;
            strcpy(temp.str,str);
            for (int i=0; i<strlen(x.str); i++,j++)
            {
                temp.str[j] = x.str[i];              
            }
            temp.str[j]='\0';            
            return temp;
        }
        bool operator==(CString x)
        {
            if(strcmp(str,x.str)==0)
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