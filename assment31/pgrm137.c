//wap which accepts string from user and copy character that string into another by converting all small characters into capital case.
#include <stdio.h>
#include <string.h>

void StrCpycap(char *ar, char *br)
{
    while (*ar != '\0')
    {
        if (*ar>='a'&& *ar<='z')
        {
            *br = *ar-32;
            *br++;
        }
        else
        {
           *br = *ar;
            *br++; 
        }
        
        *ar++;
    }
    *br++ = '\0';
}
int main()
{
    char a[30];
    char b[30]; ///empty string.
    printf("enter a a string:");
    scanf("%[^\n]s", a);

    StrCpycap(a, b);
    printf("String is: %s", b);

    return 0;
}
/*
output:
 enter a a string:Hello World
 String is: HELLO WORLD
 
*/