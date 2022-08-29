#include<stdio.h>

int great(int*, int);

int main()
{
    int num,i;
    printf("Enter a number: ");
    scanf("%d",&num);
    int a[num];
    printf("Enter %d numbers\n",num);
    for(i=0; i<num; i++)
        scanf("%d",&a[i]);
    
    printf("%d is the greatest number",great(a, num));
    
    return 0;
}

int great(int b[], int n)
{
    int max=0, i;
    for (i=0; i<n; i++)
    {
        if(max < b[i])
            max = b[i];
    }
    return max;    
}