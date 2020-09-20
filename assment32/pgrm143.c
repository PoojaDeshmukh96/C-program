//WAP a program which check whether 7th ,15th ,21th & 28th bit is on or off.
#include <stdio.h>
int chkbit(int b)
{
    int x = 7, y = 15,z=21,w=28;

    if (b & (1 << x))
        printf("\n7th bit is on");
    else
        printf("\n 7th bit is off");

    
    if (b & (1 << y))
        printf("\n15th bit is on");
    else
        printf("\n15th bit is off");

       
        if (b & (1 << z))
        printf("\n21th bit is on");
    else
        printf("\n21th bit is off");


        if (b & (1 << w))
        printf("\n28th bit is on");
    else
        printf("\n28th bit is off");
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
output:
 enter a number:900000
 5th bit is on
 18th bit is on
 21th bit is off
 28th bit is off
*/