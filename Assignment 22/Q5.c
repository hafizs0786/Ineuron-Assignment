#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num,i,sum=0;
    int *n;
    printf("Enter size of an array: ");
    scanf("%d",&num);
    n = (int*)calloc(num,sizeof(int));
    printf("Enter %d numbers\n",num);
    for(i=0; i<num; i++)
    {
        scanf("%d",n+i);
        sum = sum + *(n+i);
    }    
    printf("Sum of %d numbers is %d",num,sum);
    free(n);
    return 0;
}