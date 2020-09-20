//write a program  which accepts string from user & copy captial  charcters of that string into another.

#include <stdio.h>
#include <string.h>

void strcpycap(char *ar,char *br)
{
  
    while(*ar!='\0')
    {
        if ((*ar >='A')&&(*ar<= 'Z'))
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
    char b[30]; //empty string

    printf(" string :");
    scanf("%[^\n]s", a);

    strcpycap(a, b);
     printf("string is: %s",b);

    return 0;
}
/*
output:
string :Hello World
string is: HW
*/