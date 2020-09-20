//wap which accepts string from user and copy character that string into another by toggling the cases.
#include <stdio.h>
#include <string.h>

void StrCpycap(char *ar, char *br)
{
    while (*ar != '\0')
    {
        if (*ar >= 'A' && *ar <= 'Z')  //for small case
        {
            *br = *ar + 32;
            *br++;
        }
        else if(*ar >= 'a' && *ar <= 'z')  //for capital case
        {
            *br = *ar-32;
            *br++;
        }
        else             //for spaceing
        {
            *br=*ar;
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
    printf("enter  a string:");
    scanf("%[^\n]s", a);

    StrCpycap(a, b);
    printf("String is: %s", b);

    return 0;
}
/*
 enter a string:HelLO World
 String is: hELlo wORLD

 enter  a string:Ganpati Bappa MORYA!!
 String is: gANPATI bAPPA morya!!
*/