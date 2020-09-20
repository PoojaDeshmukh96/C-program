//accept charcter from user and check whether it is digit or not.(0-9)
#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL chkalpha(char value)
{
    if (value>='0'  && value <= '9')
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
        printf("It is a digit");
    }
    else
    {
        printf("It is not digit");
    }
    return 0;
}
/*
output:
 Enter any character:3
 It is a digit.
 
 Enter any character:k
 It is not digit
*/