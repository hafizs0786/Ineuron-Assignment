#include<stdio.h>
int main()
{
    int m;
    printf("Enter a month number (Ex:1 for January): ");
    scanf("%d",&m);
    if (m == 2)
        printf("Month %d has 28 or 29 Days",m);
    else if (m==4 || m==6 || m==9 || m==11)
        printf("Month %d has 30 Days",m);
    else 
        printf("Month %d has 31 Days",m);

    return 0;
}