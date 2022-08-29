#include<stdio.h>

int perm(int, int);

int main()
{
    int n,d,res;
    printf("Enter a number and a digit: ");
    scanf("%d%d",&n,&d);
    res = perm(n,d);    
    if(res==1)
        printf("Digit available in number");
    else
        printf("Digit not available in number");
    return 0;
}

int perm(int a, int b)
{
    int c;
    while(a>0)
    {
        c=a%10;
        if (c==b)
        {            
            return 1;
            break;
        }
        else
            a=a/10;      
    }
    return 0;
}