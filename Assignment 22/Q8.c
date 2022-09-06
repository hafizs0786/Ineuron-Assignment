#include<stdio.h>
#include<stdlib.h>

void f1(int);

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    f1(num);
    return 0;
}

void f1(int n)
{
    int *p;
    p = (int*)malloc(sizeof(int));
    *p = n*n;
    printf("Square of %d is %d",n,*p);
    free(p);
    /*After free the dynamic variable the variable is unreserved and have garbage value
    but pointer contains address of that variable, in this situation p is a dangling pointer*/
    printf("\nValue after free %d",*p);
}