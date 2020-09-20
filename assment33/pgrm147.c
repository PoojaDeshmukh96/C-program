//Write a program which accept number from user & off the 7th & 10thbit of that number and return modified number.
#include <stdio.h>

int chkbit(int b)
{

    int x = 7,y=10, no = 0;

    no = (b & ~(1 << x- 1));
      no = (no & ~(1 << y - 1));
    
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
 enter a number:577
 modified number is:1

 enter a number:999
 modified number is:423
*/