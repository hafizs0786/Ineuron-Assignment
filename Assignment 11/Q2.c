#include<stdio.h>

int hcf(int,int);

int main()
{
    int a,b;
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
    printf("HCF of %d & %d is %d",a,b,hcf(a,b));
    return 0;
}

int hcf(int x, int y)
{
    int i,hcf;
    for (i=1; 1; i++)
        if (i%x==0 && i%y==0)
            break;

    hcf = (x*y)/i;
    return hcf;
}