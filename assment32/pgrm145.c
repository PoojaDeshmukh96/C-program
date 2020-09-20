//WAP a program which check whether first & last bits are on or off.
#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL checkbit(int a)
{
    if (a & (1 << 1) | a & (1 << 32))
       return 1;
    else
       return 0;
}

int main()
{
    unsigned int no1 = 0,pos1,pos2;
    BOOL ans=FALSE;

    printf("enter a number:");
    scanf("%d", &no1);

    ans=checkbit(no1);

    if (ans==1)
        printf("bits are on");
    else
       printf("bits are off");

    return 0;
}
/*
output:
enter a number:15
bits are on.

enter a number:20
bits are off.
*/