//accept charcter from user and check whether it is lower case  or not.(a-z)
#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL chkalpha(char value)
{
    if (value>='a'  && value <= 'z')
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
        printf("It is a small  case");
    }
    else
    {
        printf("It is not small case");
    }
    return 0;
}
/*
output:
 Enter any character:r
 It is a small  case.
 
 Enter any character:A
 It is not small case.