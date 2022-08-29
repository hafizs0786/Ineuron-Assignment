#include<stdio.h>

int main()
{
    int num, i;
    printf("Enter a number: ");
    scanf("%d",&num);
    int a[num];
    printf("Enter %d numbers\n",num);
    for(i=0; i<num; i++)
        scanf("%d",&a[i]);

    for (i=1; i<=num; i++)
        printf("%d ",a[num-i]);
    
    return 0;
}