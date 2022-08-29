#include<stdio.h>

int main()
{
    int a[10],avg=0,i;
    printf("Enter 10 numbers to find average\n");
    for (i=0; i<10; i++)
    {
        scanf("%d",&a[i]);
        avg = avg + a[i];
    }

    printf("Average is %d",avg/10);

    return 0;    
}