//accept charcter from user and check whether it is capital or not((A-Z).
#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL chkalpha(char value)
{
   if(value>='A' && value<='Z')
   {
       return 1;
   }
   else
   {
       return 0;
   }
   
}
int main()
{
    char ch='\0';
    BOOL ans=FALSE;

    printf("Enter any character:");
    scanf("%c",&ch);

    ans=chkalpha(ch);
    
    if(ans==TRUE)
    {
        printf("It is a capital character:");
    }
    else
    {
        printf("It is not a capital character:");
    }
    return 0;
}
/*
output:
 Enter any character:D
 It is a capital character

 Enter any character:c
 It is not a capital character
*/