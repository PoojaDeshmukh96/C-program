#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL display(char value)
{
        if ((value>='a' && value<='z')&&(value>='A' && value<='Z'))
        
        {
           return FALSE;
        }

        else  
        {
           return TRUE;
        }
    
}

int main()
{
    char ch = '\0';
    BOOL ans = FALSE;

    printf("Enter any character:");
    scanf("%c", &ch);

    ans=display(ch);
     
    if(ans==FALSE)
    {
        printf("It is not special character");
    }
    else
    {
         printf("It is special character");
    }
    
    return 0;
}
