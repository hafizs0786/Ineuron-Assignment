#include<stdio.h>

void reverse(int*,int);

int main()
{
    int num, i;
    printf("Enter a number: ");
    scanf("%d",&num);
    int a[num];
    printf("Enter %d numbers\n",num);

    for(i=0; i<num; i++)
        scanf("%d",&a[i]);

    printf("Original array:\n");
    for (i=0; i<num; i++)
        printf("%d ",a[i]);
    
    printf("\nReversed array:\n");
    reverse(a,num);

    return 0;
}

void reverse(int b[],int num)
{
    int i;
    for (i=1; i<=num; i++)
        printf("%d ",b[num-i]);
}