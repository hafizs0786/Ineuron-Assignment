#include<stdio.h>

int fact(int);
int comb(int,int);
void pascal(int);

int main()
{
    int a;
    printf("Enter a number to print that size of Pascal triangle: ");
    scanf("%d",&a);
    pascal(a);
    return 0;
}

int fact(int x)
{
    int res = 1;
    for (int i=1; i<=x; i++)
        res=res*i;
    return res;    
}

int comb(int n, int r)
{
    return fact(n)/(fact(r)*fact(n-r));
}

void pascal(int num)
{
    for (int i=0; i<num; i++)
    {        
        for (int sp=0; sp<num-i; sp++)
            printf(" ");
        for (int j=0; j<=i; j++)
            printf("%2d",comb(i,j));

        printf("\n"); 
    }    
}
