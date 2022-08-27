#include<stdio.h>

int main()
{
    int x, i=1;;
    printf("Enter a number: ");
    scanf("%d",&x);
    while (i<=x)
    {
        printf("Cube of %d is %d\n",i,i*i*i);
         i++;
    }

    return 0;
}
