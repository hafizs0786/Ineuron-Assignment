#include<stdio.h>

int main()
{
    int a[10],i,max=0;
    printf("Enter 10 numbers\n");
    for (i=0; i<10; i++)
    {
        scanf("%d",&a[i]);

        if (max < a[i])
            max = a[i];        
    }
    printf("Greatest number is %d",max);

    return 0;    
}