#include<stdio.h>

int si(int, int, int);
int main()
{
    int p,r,t;
    printf("Enter Principal, Rate and Time\n");
    scanf("%d%d%d",&p,&r,&t);

    printf("Simple interest is: %d",si(p,r,t));
    
    return 0;
}

int si(int x, int y, int z)
{
    int si = (x*y*z)/100;
    return si;
}