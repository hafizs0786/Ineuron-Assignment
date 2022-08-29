#include<stdio.h>

int main()
{
    int a[5],i;
    printf("Enter 5 numbers\n");
    for(i=0; i<5; i++)
        scanf("%d",&a[i]);

    int b[5];
    for (i=0; i<5; i++)
        b[i] = a[i];
    
    for (i=0; i<5; i++)
        printf("Values in second array:\n%d ",b[i]);
    
    return 0;
}