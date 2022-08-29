#include<stdio.h>

int main()
{
    int a[10], i, min=9999999;
    printf("Enter 10 numbers\n");
    for (i=0; i<10; i++)
    {
        scanf("%d",&a[i]);

        if(min > a[i])
            min = a[i];
    }
    printf("Smallest number is %d",min);
    
}