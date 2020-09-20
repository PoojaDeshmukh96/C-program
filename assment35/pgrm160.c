//WAP a program which accepts one number from user & check whether 9th & 12th bit is on or off.

#include <stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL checkbit(int a, int b)
{
    if (a & (1 >> a) & a & (1 >> b))
        return 1;
    else
        return 0;
}

int main()
{
    unsigned int no1 = 0, pos1, pos2;
    BOOL ans = FALSE;

    printf("enter a number:");
    scanf("%d%d%d", &no1, &pos1);

    ans = checkbit(no1, pos1);

    if (ans == 1)
        printf("bits are on");
    else
        printf("bits are off");

    return 0;
}