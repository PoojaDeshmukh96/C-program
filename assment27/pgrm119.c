//WAP which accepts string from user and check if the string contains vowels or not.
#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL chkvowels(char *src)
{
    while (*src != '\0')
    {
        if (*src=='a'||*src=='e'||*src=='i'||*src=='o'||*src=='u'||*src=='A'||*src=='E'||*src=='I'||*src=='O'||*src=='U')
        {
            return 1;
        }
        src++;
    }

}
int main()
{
    char arr[20];
    BOOL ans = FALSE;

    printf("enter a string:");
    scanf("%[^\n]s", arr);

    ans = chkvowels(arr);
    
    if(ans==TRUE)
    {
        printf("String contains vowels");
    }
    else
     {
         printf("String does not contains vowels");    
     }
     return 0;
}
/*
 enter a string:xyz
 String does not contains vowels

 enter a string:marvellous
 String contains vowels
*/