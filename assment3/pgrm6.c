#include <stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

char chkvowel(char c)
{
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
    {
        return TRUE;
    }
    else
    {
        return 0;
    }
}
int main()
{
    char val = '\0';
    BOOL bret = FALSE;

    printf("enter the character:");
    scanf("%c", val);

    bret = chkvowel(val);

    if (bret == chkvowel(TRUE))
    {
        printf("char it is vowels:");
    }
    else
    {
        printf("char it is not vowels:");
    }
    return 0;
}