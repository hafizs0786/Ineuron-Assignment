#include<stdio.h>

int main()
{
    int a[10], i, se=0, so=0;
    printf("Enter any 10 numbers\n");
    for(i=0; i<10; i++)
    {
        scanf("%d",&a[i]);

        if(a[i]%2==0)
            se = se + a[i];
        else
            so = so + a[i];
    }

    printf("Sum of even numbers is %d\n",se);
    printf("sum of odd numbers is %d",so);

    return 0;
}