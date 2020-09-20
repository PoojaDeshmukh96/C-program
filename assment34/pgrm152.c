//WAP a program which accepts one number & position from user & off that bit.Display modified number.
#include <stdio.h>

int bitoff(int b, int p)
{   
     int no=0;
     no= b & ~(1 << p - 1);   //negation
     printf("modified bit is:%d",no);
    
}

int main()
{
    int no = 0, pos = 0;
    printf("enter a number:");
    scanf("%d", &no);

    printf("enter a position:");
    scanf("%d", &pos);
    bitoff(no, pos);

    return 0;
}
/*
output:
enter a number:10
enter a position:2
modified bit is:8

enter a number:15
enter a position:3
modified bit is:11
*/