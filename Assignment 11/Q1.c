#include<stdio.h>

int lcm(int, int);

int main()
{
    int a,b;
    printf("Enter two numbers to check LCM\n");
    scanf("%d%d",&a,&b);
    printf("LCM of %d & %d is %d", a,b,lcm(a,b));
    
    return 0;
}

int lcm(int x, int y)
{
    int i;
    for(i=1; 1; i++)
        if (i%x==0 && i%y==0)
            break;

    return i;
}