#include<stdio.h>
#include<string.h>

int main()
{
    char str[5][20] = {"Hello", "Navin", "Nitin", "Race Car", "No lemon no melon"};
    char str2[5][20];
    int i,j,len,palin;

    for(i=0;i<5;i++)
        strcpy(str2[i], str[i]);

    for (i=0; i<5; i++)
    {
        palin=1;
        for (len=0; str[i][len]; len++);
        
        //Converting to lowercase for comparision in duplicate string
        for (j=0; str[i][j]; j++)
            if(str2[i][j] >= 'A' && str2[i][j] <= 'Z')
                str2[i][j]+=32;
        
        for(j=0, len--; j<=len; j++,len--)
        {
            //Removing space for comparision
            if(str2[i][j] == ' ')
                j++;
            if(str2[i][len] == ' ')
                len--;

            if (str2[i][j] != str2[i][len])
                break;
        }
        
        //Printing Original string
        if (j>len)
            printf("%s\n",str[i]);
            
    }
    
    return 0;
}