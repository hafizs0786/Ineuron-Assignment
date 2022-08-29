#include<stdio.h>

int main()
{
    int a[10], i,j,temp;
    printf("Enter 10 numbers\n");
    for (i=0; i<10; i++)
        scanf("%d",&a[i]);

    for (i=0; i<9; i++)
    {
        for (j=i+1; j<10; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }            
        }
    }

    for (i=0; i<10; i++)        
        printf("%d ",a[i]);        
    
    return 0;
}