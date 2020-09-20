//WAP a program which check whether 7th ,8th & 9th bit is on or off.
#include <stdio.h>
int chkbit(int b)
{
    int x = 7, y = 8, z =9;

    if (b & (1 << x))
        printf("\n7th bit is on");
    else
        printf("\n 7thbit is off");

    if (b & (1 << y))
        printf("\n8th bit is on");
    else
        printf("\n8th bit is off");

    if (b & (1 << z))
        printf("\n9th bit is on");
    else
        printf("\n9th bit is off");

}

int main()
{
    int no = 0;
    printf("enter a number:");
    scanf("%d", &no);

    chkbit(no);

    return 0;
}
/*
 enter a number:222
 7th bit is on
 8th bit is off
 9th bit is off

 enter a number:999
 7th bit is on 
 8th bit is on
 9th bit is on
*/