//wap which accepts string from user and copy character that string into another by converting all captial characters into small case.
#include <stdio.h>
#include <string.h>

void StrCpycap(char *ar, char *br)
{
    while (*ar != '\0')
    {
        if (*ar >= 'A' && *ar <= 'Z')
        {
            *br = *ar + 32;
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
 enter a a string:HELLO WORLD
 String is: hello world
 
 enter a a string:HeY wHaTsUpP!!
 String is: hey whatsupp!!
*/