//WAP a program which accepts one number from user & check whether 9th & 12th bit is on or off.
#include <stdio.h>

int checkbit(int a)
{
    int x=9,y=12;

    if (a &(1<<x-1) | a &(1<<y-1))
        printf("bits are on");
    else
        printf("bits are off");

}

int main()
{
    unsigned int no1 = 0;

    printf("enter a number:");
    scanf("%d", &no1);

     checkbit(no1);

    return 0;
}
/*
output:
 enter a number:257
 bit are on
*/