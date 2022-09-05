#include<stdio.h>

int main()
{
    char str[] = "Icc T-20 World Cup";
    int i,alp=0, dig=0, spc=0; 
    for (i=0; str[i]; i++)
    {
        if (str[i]>='A' && str[i]<='Z' || str[i]>='a' && str[i]<='z')
            alp++;
        else if (str[i]>='0' && str[i]<='9')
            dig++;
        else if (str[i]!=' ') //Not including space as a special character
            spc++;       
    }
    printf("%d Alphabets, %d Digits and %d Special characters",alp,dig,spc);
    
    return 0;
}