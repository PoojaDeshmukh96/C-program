#include <stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL   chkevn(int ino)
{
    if ((ino % 2) == 0)
    {
        printf("\n number is even");
    }
    else
    {
        printf("\n not even");
    }
}

int main()
{
    int ivalue = 0;
    BOOL bret = FALSE;
    printf("\n enter numer:");
    scanf("%d", &ivalue);

    bret = chkevn(ivalue);
    return 0;
}