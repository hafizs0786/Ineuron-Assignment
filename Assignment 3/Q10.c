#include<stdio.h>
int main()
{   
    int purc,sell;
    float diff,per;
    printf("Enter purchase price: ");
    scanf("%d",&purc);
    printf("Enter Selling price: ");
    scanf("%d",&sell);
    diff = sell - purc;
    per = diff*100/purc;
    per>0 ? printf("Profit %.2f%%", per) : printf("Loss %.2f%%", per);
    return 0;
}