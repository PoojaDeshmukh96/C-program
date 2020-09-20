//WAP which accepts 2 string & check whether first N content of 2 strings are equal or not.
#include <stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL strcmpre(char *ar, char *br,int n)
{
    while ((*ar != '\0') && (*br != '\0') && (n!=0))
    {
       ar++;
        br++;
        n--;
    }

    if (*ar == *br )

        return 1;

    else

        return 0;
}

int main()
{
    int no = 0;
    BOOL ans = FALSE;
    char arr[30] = "hello world ";
    char brr[30] = "hello world whatsupp ";

    printf("Number of character:");
    scanf("%d",&no);

    ans = strcmpre(arr, brr,no);

    if (ans == 1)
        printf("Strings are equals");
    else
        printf("Strings are not equals");

    return 0;
}
/*
output:
Number of character:11
Strings are equals

Number of character:14
Strings are not equals
*/
