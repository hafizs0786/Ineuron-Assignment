#include<stdio.h>

int main()
{
    int rupee;
    float usd = 76.23;
    printf("Enter amount in rupee: ");
    scanf("%d",&rupee);
    printf("The USD value of %d rupee is %.2f", rupee, rupee/usd);
    return 0;
}