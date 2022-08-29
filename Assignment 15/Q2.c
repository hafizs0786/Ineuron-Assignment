#include<stdio.h>

int small(int*, int);

int main()
{
    int num,i;
    printf("Enter a number: ");
    scanf("%d",&num);
    int a[num];
    printf("Enter %d numbers\n",num);
    for(i=0; i<num; i++)
        scanf("%d",&a[i]);

    printf("%d is the smallest number", small(a,num));
    
    return 0;
}

int small(int b[], int n)
{
    int i, min=999999;
    for (i=0; i<n; i++)
    {
        if (b[i] < min)
            min = b[i];
    }
    return min;    
}