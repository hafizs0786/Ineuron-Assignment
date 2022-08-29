#include<stdio.h>

int hcf(int, int);

int main()
{
    int a,b;
    printf("Enter to numbers to print HCF\n");
    scanf("%d%d",&a,&b);
    if (a>b)
    {
        a=a+b;
        b=a-b;
        a=a-b;        
    }   
    printf("%d",hcf(a,b));
    return 0;
}

int hcf(int x, int y)
{
    if (y==0)
        return x;

    return hcf(y, x%y);    
}