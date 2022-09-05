#include<stdio.h>

int main()
{
    char emails[5][30] = {"hafiz@gmail.com", "rohits98@gmail.com", "kalubabu.yahoo.com",
                          "mysirg@ineuron.ai", "saurabhsir@mysirg.com"};
    int i,j,odd;
    printf("Odd Email:\n");
    for (i=0; i<5; i++)
    {
        odd=0;
        for (j=0; emails[i][j]; j++)
        {
            if (emails[i][j]=='@')
            {
                odd=1;
                break;
            }    
        }
        if(odd==0)
            printf("%s\n",emails[i]);        
    }
    
    return 0;
}