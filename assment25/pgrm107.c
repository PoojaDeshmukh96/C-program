//accept charcter from user and check whether it is alphabet or not.(A-Z a-z)
#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL chkalpha(char value)
{
    if (value >= 'A' && value <= 'z')
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
    char ch = '\0';
    BOOL ans = FALSE;

    printf("Enter any character:");
    scanf("%c", &ch);

    ans = chkalpha(ch);

    if (ans == TRUE)
    {
        printf("It is a character:");
    }
    else
    {
        printf("It is not  character:");
    }
    return 0;
}
/*
output:
 Enter any character:H
 It is a  character

 Enter any character:&
 It is not a  character
*/