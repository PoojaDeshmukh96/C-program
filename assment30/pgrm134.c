////write a program  which accepts string from user & copy small charcters of that string into another.

#include <stdio.h>
#include <string.h>

void strcpycap(char *ar,char *br)
{
    int i=0;
    for(i=0;*ar!='\0';i++)
    {
        if ((*ar >='a')&&(*ar<= 'z'))
          {
              *br = *ar;
              *br++;
          }
          *ar++;
    }
    *br = '\0';
}
int main()
{
    char a[30];
    char b[30]; ///empty string.

    printf(" string :");
    scanf("%[^\n]s", a);

    strcpycap(a, b);
     printf("string is: %s", b);

    return 0;
}
/*
output:
 string :Hello World
string is: elloorld
*/