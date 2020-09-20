//write a program which accept 2 string from user and concat second string after first string.
#include <stdio.h>
#include <string.h>

void StrCatX(char *ar, char *br)
{
    
    while(*ar !='\0') //traverse first string
    {
        *ar++;
    }
    
    while(*br != '\0') //copy content of destination in source.
    {
      *ar=*br;
      *ar++;
      *br++;
    }
     *br = '\0';
}
int main()
{
    char a[30]="Hello people!!";
    char b[30]="whats upp??"; ///empty string.

    StrCatX(a, b);
    printf("Final string is: %s", a);

    return 0;
}
/*
output:
Final string is: Hello people!!whats upp??
*/