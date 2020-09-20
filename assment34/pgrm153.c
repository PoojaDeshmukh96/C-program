//WAP a program which accepts one number & position from user & on that bit.Display modified number.
#include <stdio.h>

int biton(int b, int p)
{
    int no = 0;
    no = b | (1 << p - 1);   //bitwise or
    printf("modified bit is:%d", no);
}

int main()
{
    int no = 0, pos = 0;
    printf("enter a number:");
    scanf("%d", &no);

    printf("enter a position:");
    scanf("%d", &pos);
    biton(no, pos);

    return 0;
}
/*
output:
 enter a number:10
 enter a position:3
 modified bit is:14

 enter a number:20
 enter a position:6
 modified bit is:52
*/