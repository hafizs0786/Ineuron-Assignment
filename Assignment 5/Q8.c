#include<stdio.h>

int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    for (int i=1; i<=x; i++)
    {
        printf("Square of %d is %d\n",i,i*i);
    }

    return 0;
}
