#include<stdio.h>

void revWord(char*);

int main()
{
    char str[] = "My name is khan and I'm not a terrorist";
    revWord(str); //Reverse the string word wise.
    printf("%s",str);
    return 0;
}

void revWord(char a[])
{
    int i,j,num,diff;
    for (num=0; a[num]; num++);
    char b[num],ch;

    //Reverse words
    for(i=0,j=0; a[i]; i++)
    {
        if(a[i] == ' ' || i==num-1)
        {
            b[i]=a[i];
            if(i!=num-1)
                i--;
            for (diff=0; j<=i; j++,diff++)
            {
                b[j]=a[i-diff];
            }
            i++;
            j++;
        }
    }

    //Reverse String
    for (i=0, num--; i<=num; i++,num--)
    {
        ch = b[i];
        b[i] = b[num];
        b[num] = ch;
    }

    //Copy string b[] to a[]
    for (i=0; b[i]; i++)
        a[i] = b[i];
}