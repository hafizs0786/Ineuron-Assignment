#include<stdio.h>

int main()
{
    int i,a[10],sum=0;
    printf("Enter 10 numbers\n");
    for (i=0; i<10; i++)
    {
        scanf("%d",&a[i]);
        sum = sum + a[i];
    }
    printf("Sum of 10 numbers is %d",sum);

    return 0;
}