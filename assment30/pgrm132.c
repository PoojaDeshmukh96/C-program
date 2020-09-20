//write a program  to copy content from one string into another.(using strncpy).

#include <stdio.h>
#include<string.h>
void strncpyx(char ar[30], char br[30],int val)
{
    int i = 0;
    while (ar[i] != '\0'&& (val>=0))
    {
        br[i] = ar[i];
        i++;
        val--;
    }
    br[i] = '\0';
}
int main()
{
    char a[30];
    char b[30]; //empty string

     printf(" string :");
     scanf("%[^\n]s", a);

    strncpyx(a,b,10);
    printf("copy string is:%s",b);

    return 0;
}
/*
output:
 string :marvellous infosystem
 copy string is:marvellous

 string :hello world
 copy string is:hello world
*/