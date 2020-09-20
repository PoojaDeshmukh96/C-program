//WAP a program which accepts one number & position from user & toggle that bit.Display modified number.
#include <stdio.h>

int biton(int a,int b)
{
    int no = 0;
    no = ((a ^ 0x0F)<< 1 & (b ^ 0xF0)>> 1); //bitwise Xor
    //no=(b ^)
    printf("modified bit is:%d", no);
}

int main()
{
    int no = 0, pos = 0;
    printf("enter a number:");
    scanf("%d%d", &no1,&no2);

//    printf("enter a position:");
  //  scanf("%d", &pos);
    biton(no);

    return 0;
}