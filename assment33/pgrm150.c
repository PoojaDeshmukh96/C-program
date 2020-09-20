////Write a program which accept number from user & on first 4 bits of that number and return modified number
#include <stdio.h>

int chkbit(int b)
{

    int x = 7, y = 10, no = 0;

    no = b | ((1 << 0)|(1 << 1)|(1 <<2)|(1 << 3)); 
    printf("modified number is:%d", no);
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
 enter a number:73
 modified number is:79

 enter a number:21
 modified number is:31
*/