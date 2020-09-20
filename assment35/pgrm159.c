//WAP a program which accepts one number & 2 position from user & check whether first & second bits are on or off.
#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL checkbit(int a,int p,int p1)
{
    if (a & (1 << p) | a & (1 << p1))
       return 1;
    else
       return 0;
}

int main()
{
    unsigned int no1 = 0,pos1,pos2;
    BOOL ans=FALSE;

    printf("enter a number:");
    scanf("%d%d%d", &no1,&pos1,&pos2);

    ans=checkbit(no1,pos1,pos2);

    if (ans==1)
        printf("bits are on");
    else
       printf("bits are off");

    return 0;
}
/*
output:
enter a number:10 3 7
bits are on
*/