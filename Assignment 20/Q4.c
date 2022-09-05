#include<stdio.h>

int main()
{
    int x, *p, **q, ***r;
    x = 5, p = &x, q = &p, r = &q;

    printf("With pointers, we can access variables and their addresses:\n");

    printf("\nSuppose we have int variables x,*p,**q,***r\n");
    printf("x = 5, p = &x, q = &p, r = &q;\n");

    printf("\n1. Ways to access variable 'x'\n");
    printf("=> (a)x (b)*p (c)**q (d)***r \nResult: %d\n",x);

    
    printf("\n2. Ways to access variable 'p' and address of variable 'x' \n");
    printf("=> (a)&x (b)p (c)*q (d)**r \nResult: %d\n",&x);
    
    printf("\n3. Ways to access variable 'q' and address of variable 'p'\n");
    printf("=> (a)&p (b)q (c)*r \nResult: %d\n",&p);
    
    printf("\n4. Ways to access variable 'r' and address of variable 'q'\n");
    printf("=> (a)&q (b)r \nResult: %d\n",&q);
    return 0;
}